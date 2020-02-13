/* Fake Binary

Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'.
Return the resulting string.
 */


#include <string>

using std::string;

string fakeBin(string str)
{
    string ret;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i]-'0' < 5)
        {
            ret.push_back('0');
        }
        else
        {
            ret.push_back('1');
        }
    }
    return ret;
}