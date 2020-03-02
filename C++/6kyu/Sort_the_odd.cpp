/* Sort the odd

You have an array of numbers.
Your task is to sort ascending odd numbers but even numbers must be on their
places.

Zero isn't an odd number and you don't need to move it. If you have an empty
array, you need to return it.

Example

sortArray([5, 3, 2, 8, 1, 4]) == [1, 3, 2, 8, 5, 4] */

#include <vector>
#include <algorithm>

using std::get;
using std::sort;
using std::vector;

class Kata
{
public:
    vector<int> sortArray(vector<int> array)
    {
        vector<int> odds;
        vector<size_t> ind;
        for (size_t i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                odds.push_back(array[i]);
                ind.push_back(i);
            }
        }
        sort(odds.begin(), odds.end());
        for (size_t i = 0; i < ind.size(); i++)
        {
            array[ind[i]] = odds[i];
        }
        return array;
    }
};