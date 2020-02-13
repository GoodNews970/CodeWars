/* Find the stray number

You are given an odd-length array of integers, in which all of them are the same, except for one single number.

Complete the method which accepts such an array, and returns that single different number.

The input array will always be valid! (odd-length >= 3)

Examples
stray(3, {1, 1, 2}) == 2
stray(7, {17, 17, 3, 17, 17, 17, 17}) == 3 */

#include <stddef.h>

int stray(size_t n, int arr[n])
{
    int num1 = arr[0];
    int num2 = arr[0];
    int c1 = 0;
    int c2 = 0;
    size_t i = 1;
    while (num1 == num2)
    {
        num2 = arr[i];
        i++;
    }
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == num1)
        {
            c1 += 1;
        }
        else
        {
            c2 += 1;
        }
    }
    return (c1 > c2) ? num2 : num1;
}