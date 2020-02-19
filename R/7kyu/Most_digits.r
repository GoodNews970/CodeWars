# Most digits

# Find the number with the most digits.

# If two numbers in the argument array have the same number of digits,
# return the first one in the array.

find_longest <- function(arr) {
  l <- 0
  for (e in arr) {
    if (nchar(e) > nchar(l)) {
      l <- e
    }
  }
  return(l)
}