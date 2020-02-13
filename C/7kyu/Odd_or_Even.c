/* Odd or Even

Task:
Given a list of numbers, determine whether the sum of its elements is odd or even.

Give your answer as a string matching "odd" or "even".

If the input array is empty consider it as: [0] (array with a zero).

Example:
odd_or_even([0])          ==  "even"
odd_or_even([0, 1, 4])    ==  "odd"
odd_or_even([0, -1, -5])  ==  "even" */

#include <stdlib.h>

const char *odd_or_even(const int *v, size_t sz) {
    int sum = 0;
    for (size_t i = 0; i < sz; i++)
    {
        sum += v[i];
    }
    return (sum % 2 == 0) ? "even" : "odd";
}