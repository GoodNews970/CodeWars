/* Find the odd int

Given an array, find the integer that appears an odd number of times.

There will always be only one integer that appears an odd number of times. */

#include <vector>

int findOdd(const std::vector<int> &numbers)
{
    int result = 0;
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        result = result ^ numbers[i];
    }
    return result;
}