/* Convert string to camel case

Complete the method/function so that it converts dash/underscore delimited words
into camel casing. The first word within the output should be capitalized only
if the original word was capitalized (known as Upper Camel Case, also often
referred to as Pascal case).

Examples
to_camel_case("the-stealth-warrior") // returns "theStealthWarrior"

to_camel_case("The_Stealth_Warrior") // returns "TheStealthWarrior" */

#include <string>

using std::string;

string to_camel_case(string text)
{
    string ret, buffer;
    size_t ind;
    string delims = "-_";
    bool cap = false;
    while ((ind = text.find_first_of(delims)) != string::npos)
    {
        buffer = text.substr(0, ind);
        if (cap)
        {
            buffer[0] = toupper(buffer[0]);
        }
        ret += buffer;
        text.erase(0, ind + 1);
        cap = true;
    }
    text[0] = toupper(text[0]);
    ret += text;
    return ret;
}