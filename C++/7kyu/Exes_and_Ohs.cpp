/* Exes and Ohs

Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false */

#include <string>

bool XO(const std::string &str)
{
    int xc = 0, oc = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        xc = (str[i] == 'x' || str[i] == 'X') ? xc += 1 : xc = xc;
        oc = (str[i] == 'o' || str[i] == 'O') ? oc += 1 : oc = oc;
    }
    bool result = (xc == oc) ? result = true : result = false;
    return result;
}