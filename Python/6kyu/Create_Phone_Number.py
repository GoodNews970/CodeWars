""" Create Phone Number

Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

Example:
create_phone_number([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) # => returns "(123) 456-7890"
The returned format must be correct in order to complete this challenge.
Don't forget the space after the closing parentheses! """

def create_phone_number(n):
    nstr = [str(i) for i in n]
    return "(" + nstr[0] + nstr[1] + nstr[2] + ") " + nstr[3]+ nstr[4]+ nstr[5] + "-" + nstr[6] + nstr[7] + nstr[8] + nstr[9]