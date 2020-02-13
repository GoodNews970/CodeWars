/* Abbreviate a Two Word Name

Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

Patrick Feeney => P.F */

#include <string>

std::string abbrevName(std::string name)
{
    std::string res;
    res.push_back(toupper(name[0]));
    res.push_back('.');
    res.push_back(toupper(name[name.find(' ')+1]));
    return res;
}