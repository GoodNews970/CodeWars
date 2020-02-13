/* Reversed sequence

Get the number n (n>0) to return the reversed sequence from n to 1.

Example : n=5 >> [5,4,3,2,1] */

#include <vector>

std::vector<int> reverseSeq(int n)
{
    std::vector<int> ret;
    for (size_t i = n; i >= 1; i--)
    {
        ret.push_back(i);
    }
    return ret;
}