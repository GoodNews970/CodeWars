/* Find The Parity Outlier

You are given an array (which will have a length of at least 3, but could be
very large) containing integers. The array is either entirely comprised of odd
integers or entirely comprised of even integers except for a single integer N.
Write a method that takes the array as an argument and returns this "outlier" N.

Examples
[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number) */

#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int find_outlier(const int *values, size_t count)
{
    bool typenf = true, outliernf = true;
    size_t i = 0;
    int even = 0, odd = 0, outlier = 0;
    while (typenf)
    {
        (abs(values[i]) % 2 == 0) ? even++ : odd++;

        (i >= 2 && even >= 2) ? (typenf = false, even = 0, odd = 1)
                              : (i >= 2 && odd >= 2)
                                    ? (typenf = false, odd = 0, even = 1)
                                    : (typenf = true);
        i++;
    }
    i = 0;
    while (outliernf)
    {
        (abs(values[i]) % 2 == 0 && even == 1)
            ? (outliernf = false, outlier = values[i])
            : (abs(values[i]) % 2 == 1 && odd == 1)
                  ? (outliernf = false, outlier = values[i])
                  : (outliernf = true);
        i++;
    }
    return outlier;
}