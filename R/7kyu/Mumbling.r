# Mumbling
# 
# This time no story, no theory. The examples below show you how to write function accum:
#   
#   Examples:
#   
# accum("abcd") -> "A-Bb-Ccc-Dddd"
# accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
# accum("cwAt") -> "C-Ww-Aaa-Tttt"
#
# The parameter of accum is a string which includes only letters from a..z and A..Z.

accum <- function(s){
  letters <- strsplit(s, "")[[1]]
  conversion <- lapply(seq_along(letters), function(index){
    letter = tolower(letters[index])
    expansion = paste0(c(rep(letter, index)), collapse = "")
    paste0(toupper(substr(expansion, 1, 1)), substr(expansion, 2, nchar(expansion)))
  })
  paste(unlist(conversion), collapse = "-")
}