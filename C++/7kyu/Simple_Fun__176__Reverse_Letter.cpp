/* Simple Fun #176: Reverse Letter

Task
Given a string str, reverse it omitting all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str

A string consists of lowercase latin letters, digits and symbols.

[output] a string */

#include <string>

using std::string;

std::string reverse_letter(const std::string &str)
{
    string ret = "";
    for (int i = str.length() - 1; i >= 0; --i)
    {
        if (isalpha(str[i]))
        {
            ret += str[i];
        }
    }
    return ret;
}