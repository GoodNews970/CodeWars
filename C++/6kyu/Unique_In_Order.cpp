/* Unique In Order

Implement the function unique_in_order which takes as argument a sequence and
returns a list of items without any elements with the same value next to each
other and preserving the original order of elements.

For example:

uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3} */

#include <string>
#include <vector>

using std::string;
using std::vector;

template <typename T>
vector<T> uniqueInOrder(const vector<T> &iterable)
{
    vector<T> ret;
    if (iterable.size() >= 1)
    {
        ret.push_back(iterable[0]);
    }
    for (size_t i = 1; i < iterable.size(); i++)
    {
        if (iterable[i] != ret[ret.size() - 1])
        {
            ret.push_back(iterable[i]);
        }
    }
    return ret;
}
vector<char> uniqueInOrder(const string &iterable)
{
    vector<char> ret;
    if (iterable.length() >= 1)
    {
        ret.push_back(iterable[0]);
    }
    for (size_t i = 1; i < iterable.length(); i++)
    {
        if (iterable[i] != ret[ret.size() - 1])
        {
            ret.push_back(iterable[i]);
        }
    }
    return ret;
}