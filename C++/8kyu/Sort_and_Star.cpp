/* Sort and Star

You will be given an vector of string(s). You must sort it alphabetically (case-sensitive!!) and then return the
first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array. */

#include <string>
#include <vector>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
    std::string ret;
    std::sort(s.begin(), s.end());
    for (size_t i = 0; i < s[0].length(); i++)
    {
        if (i != 0)
        {
            ret.push_back('*');
            ret.push_back('*');
            ret.push_back('*');
        }
        ret.push_back(s[0][i]);
    }    
    return ret;
}