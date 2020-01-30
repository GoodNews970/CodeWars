# You are given a (small) check book as a - sometimes - cluttered (by non-alphanumeric characters) string:
#   
# "1000.00
# 125 Market 125.45
# 126 Hardware 34.95
# 127 Video 7.45
# 128 Book 14.32
# 129 Gasoline 16.10"
# The first line shows the original balance. Each other line (when not blank) gives information: check number, category, check amount.
# 
# First you have to clean the lines keeping only letters, digits, dots and spaces.
# 
# Then return a report as a string (underscores show spaces -- don't put them in your solution. They are there so you can see them and how many of them you need to have):
# 
# "Original_Balance:_1000.00
# 125_Market_125.45_Balance_874.55
# 126_Hardware_34.95_Balance_839.60
# 127_Video_7.45_Balance_832.15
# 128_Book_14.32_Balance_817.83
# 129_Gasoline_16.10_Balance_801.73
# Total_expense__198.27
# Average_expense__39.65"
# On each line of the report you have to add the new balance and then in the last two lines the total expense and the average expense. So as not to have a too long result string we don't ask for a properly formatted result.
#                                   
# Notes
# It may happen that one (or more) line(s) is (are) blank.
# Round to 2 decimals your results.
# The line separator of results may depend on the language \n or \r\n. See examples in the "Sample tests".


## My original solution. It works, but there's a rounding issue in R with this kata. 
# balance <- function(book) {
#   book <- gsub("[^[:alnum:][:space:](.)]", "", book)
#   book <- unlist(strsplit(book, "\n"))
#   balance <- as.double(book[[1]])
#   book[1] <- paste0(c("Original Balance: ", formatC(balance, format = "f", digits = 2)), collapse = "")
#   expenses <- list()
#   for (entry in seq(2, length(book), 1)) {
#     if (length(which(unlist(strsplit(book[entry]," ")) == "")) != 0){
#       adjusted_entry <- unlist(strsplit(book[entry]," "))[-which(unlist(strsplit(book[entry]," ")) == "")]
#     } else {
#       adjusted_entry <- unlist(strsplit(book[entry]," "))
#     }
#     expenses[entry] <- as.double(adjusted_entry[length(adjusted_entry)])
#     balance <- balance - expenses[[entry]]
#     book[entry] <- paste0(c(paste0(adjusted_entry, collapse = " "), " Balance ", formatC(balance, format = "f", digits = 2)), collapse = "")
#   }
#   book[length(book)+1] <- paste0(c("Total expense  " ), formatC(sum(unlist(expenses)), format = "f", digits = 2))
#   # book[length(book)+1] <- paste0(c("Average expense  " ), formatC(round(mean(unlist(expenses)), digits = 2), format = "f", digits = 2))
#   # Above is my original code. Below is a Workaround for this kata's rounding issue in R:
#   ae <- (as.numeric(unlist(strsplit(book[1], " "))[3]) - as.numeric(unlist(strsplit(book[length(book)-1], " "))[5])) / (length(book)-2)
#   book[length(book)+1] <- paste0(c("Average expense  " ), formatC(round(ae, digits = 2), format = "f", digits = 2))
#   paste0(book, collapse = "\n")
# }


## Solution by author
balance <- function(book) {
  h <- gsub("[^\\n. \\dA-Za-z]", "", book, perl = TRUE)
  book <- unlist(strsplit(h, split = "\n"))
  total <- as.numeric(book[1])
  current <- total
  count <- 0
  res <- sprintf("Original Balance: %.2f", total)
  for (line in tail(book, -1)) {
    if (length(line) != 0) {
      count <- count + 1
      line <- unlist(strsplit(line, split = "\\s+"))
      current <- current - as.numeric(line[3])
      res <- paste0(res, sprintf("\n%s %s %.2f Balance %.2f", line[1], line[2], as.numeric(line[3]), current))
    } 
  }
  paste0(res, sprintf("\nTotal expense  %.2f\nAverage expense  %.2f", total - current, (total - current) / count))
}

# TLDR: This kata is very good, but clearly has a rounding issue in the test solutions specific to R.
# 
# My original solution passed almost all tests except for 3 to 8, where the rounded average expense value was off by .01.
# After examining the tests, the expected rounding in the test solutions was inconsistent and not predictable where round()
# would be off by .01. With more tinkering, it appears that the
# discrepancies result from how the value to be rounded is obtained.
# 
# Example problem:
# 
#   book = "803
#  129 Flowers ;! 110.73 ?;
#  132 Books ;! 17.60 ?;
#  100 Car ;! 13.10 ?;
#  120 Fruits ;! 3.20 ?;
#  127 Car ;! 34.00 ?;
#  126 Books ;! 17.60 ?;"
# 
#   solution = "Original Balance: 803.00
#  129 Flowers 110.73 Balance 692.27
#  132 Books 17.60 Balance 674.67
#  100 Car 13.10 Balance 661.57
#  120 Fruits 3.20 Balance 658.37
#  127 Car 34.00 Balance 624.37
#  126 Books 17.60 Balance 606.77
#  Total expense  196.23
#  Average expense  32.71"
# 
# The original balance is 803 and final balance is 606.77. If R's base function mean() is called on a vector of the expenses, the result
# is 32.705, and round(32.705, digits = 2) yields 32.70. Yet that's off by .01 according to the test solution. Instead, if the average
# expense is calculated by taking the original balance minus the final, divided by the expense count, the discrepancy is removed despite
# using the same (visible) numbers: round((803 - 606.77)/6, digits = 2) results in 32.71.
# 
# Unless clearly stated as a specific detail in the instructions, passing this kata's tests shouldn't depend on an unseen difference
# in how one lands on the same value for rounding (e.g. 32.705 vs. 32.705, except one passes and the other doesn't).
# Other challenge takers encountered this as well, as indicated by the comments.
