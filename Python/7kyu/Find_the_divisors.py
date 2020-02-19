""" Find the divisors!

Create a function named divisors/Divisors that takes an integer n > 1 and returns an array with all of the integer's
divisors(except for 1 and the number itself), from smallest to largest. If the number is prime return the string
'(integer) is prime' (null in C#) (use Either String a in Haskell and Result<Vec<u32>, String> in Rust).

Example:
divisors(12); #should return [2,3,4,6]
divisors(25); #should return [5]
divisors(13); #should return "13 is prime" """

def divisors(integer):
    ints = range(2,integer,1)
    filt = [integer % x == 0 for x in ints]
    return str(integer) + " is prime" if sum(filt) == 0 else [j for (i,j) in enumerate(ints) if filt[i] == True]