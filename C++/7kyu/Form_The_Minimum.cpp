/* Form The Minimum

Task
Given a list of digits, return the smallest number that could be formed from
these digits, using the digits only once (ignore duplicates).

Notes:
Only positive integers will be passed to the function (> 0 ), no negatives or
zeros.
Input >> Output Examples
minValue ({1, 3, 1})  ==> return (13)
Explanation:
(13) is the minimum number could be formed from {1, 3, 1} , Without duplications

minValue({5, 7, 5, 9, 7})  ==> return (579)
Explanation:
(579) is the minimum number could be formed from {5, 7, 5, 9, 7} , Without
duplications

minValue({1, 9, 3, 1, 7, 4, 6, 6, 7}) return  ==> (134679)
Explanation:
(134679) is the minimum number could be formed from {1, 9, 3, 1, 7, 4, 6, 6, 7},
Without duplications

Playing with Numbers Series
Playing With Lists/Arrays Series
Bizarre Sorting-katas
For More Enjoyable Katas
ALL translations are welcomed
Enjoy Learning !!
Zizou */

#include <vector>
#include <algorithm>
#include <string>

using std::next_permutation;
using std::prev_permutation;
using std::sort;
using std::stoi;
using std::string;
using std::to_string;
using std::unique;
using std::vector;

unsigned long long minValue(vector<int> values)
{
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());
    int min = INT32_MAX;
    bool first = true;
    while (next_permutation(values.begin(), values.end()))
    {
        if (first)
        {
            prev_permutation(values.begin(), values.end());
            first = false;
        }
        string temp = "";
        for (size_t i = 0; i < values.size(); i++)
        {
            temp += to_string(values[i]);
        }
        min = (stoi(temp) < min) ? stoi(temp) : min;
    }
    return min;
}