/* Which are in

Given two arrays of strings a1 and a2 return a sorted array r in lexicographical
order of the strings of a1 which are substrings of strings of a2.

#Example 1: a1 = ["arp", "live", "strong"]

a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

returns ["arp", "live", "strong"]

#Example 2: a1 = ["tarp", "mice", "bull"]

a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

returns []

Notes:
Arrays are written in "general" notation. See "Your Test Cases" for examples in
your language.

In Shell bash a1 and a2 are strings. The return is a string where words are
separated by commas.

Beware: r must be without duplicates.
Don't mutate the inputs. */

#include <string>
#include <vector>
#include <algorithm>

using std::find;
using std::sort;
using std::string;
using std::vector;

class WhichAreIn
{
public:
    static vector<string> inArray(vector<string> &array1,
                                  vector<string> &array2)
    {
        vector<string> r = {};
        for (auto &&i : array1)
        {
            for (auto &&j : array2)
            {
                if (j.find(i) != string::npos &&
                    find(r.begin(), r.end(), i) == r.end())
                {
                    r.push_back(i);
                }
            }
        }
        sort(r.begin(), r.end());
        return r;
    };
};
