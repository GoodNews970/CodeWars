/* Remove First and Last Character

It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string.
You're given one parameter, the original string. You don't have to worry with strings with less than two characters. */

#include <string>

using namespace std; 

string sliceString (string str )
{ 
    str.pop_back();
    str.erase(0,1);
    return(str);
}