/* Stop gninnipS My sdroW

Write a function that takes in a string of one or more words, and returns the
same string, but with all five or more letter words reversed (Just like the name
of this Kata). Strings passed in will consist of only letters and spaces. Spaces
will be included only when more than one word is present.

Examples: spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw"
spinWords( "This is a test") => returns "This is a test" spinWords( "This is
another test" )=> returns "This is rehtona test" */

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using std::reverse;
using std::string;
using std::stringstream;

std::string spinWords(const std::string &str)
{
    stringstream stream(str);
    string tmp;
    string ret;
    while (stream >> tmp)
    {
        if (tmp.length() >= 5)
        {
            reverse(tmp.begin(), tmp.end());
        }
        ret += tmp + " ";
    }
    ret.pop_back();
    return ret;
}