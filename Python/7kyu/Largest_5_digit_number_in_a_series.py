""" Largest 5 digit number in a series

In the following 6 digit number:

283910
91 is the greatest sequence of 2 consecutive digits.

In the following 10 digit number:

1234567890
67890 is the greatest sequence of 5 consecutive digits.

Complete the solution so that it returns the greatest sequence of five consecutive digits found within the number given. The number will be
passed in as a string of only digits. It should return a five digit integer. The number passed may be as large as 1000 digits. """

def solution(digits):
    start, end, mx = 0, 5, 0
    while (end <= len(str(digits))):
        mx = int(str(digits)[start:end]) if int(str(digits)[start:end]) > mx else mx
        start += 1
        end += 1
    return mx