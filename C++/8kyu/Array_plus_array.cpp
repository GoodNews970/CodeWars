/* Array plus array

I'm new to coding and now I want to get the sum of two arrays...actually the sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too. */

#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    int sum = 0, i = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }
    for (size_t i = 0; i < b.size(); i++)
    {
        sum += b[i];
    }
  return sum;
}