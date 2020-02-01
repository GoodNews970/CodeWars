# Reversed Strings
# 
# Complete the solution so that it reverses the string value passed into it.
# 
# solution('world'); // returns 'dlrow'

solution <- function(s){
 paste(na.omit(unlist(strsplit(s, ""))[length(unlist(strsplit(s, ""))):1]), collapse = "")
}