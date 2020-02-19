# Most digits

# Find the number with the most digits.

# If two numbers in the argument array have the same number of digits,
# return the first one in the array.

find_longest <- function(arr) {
    arr[which.max(nchar(arr))]
}