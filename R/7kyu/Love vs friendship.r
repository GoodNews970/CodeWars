# Love vs friendship
# 
# If　a = 1, b = 2, c = 3 ... z = 26
# 
# Then l + o + v + e = 54
# 
# and f + r + i + e + n + d + s + h + i + p = 108
# 
# So friendship is twice stronger than love :-)
# 
# The input will always be in lowercase and never be empty.

words_to_marks <- function(s){
  alphabet = unlist(strsplit("abcdefghijklmnopqrstuvwxyz",""))
  letters = unlist(strsplit(s, ""))
  marks = sum(unlist(lapply(letters, function(letter){grep(letter, alphabet)})))
}