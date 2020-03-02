/* Valid Braces

Write a function that takes a string of braces, and determines if the order of
the braces is valid. It should return true if the string is valid, and false if
it's invalid.

This Kata is similar to the Valid Parentheses Kata, but introduces new
characters: brackets [], and curly braces {}. Thanks to @arnedag for the idea!

All input strings will be nonempty, and will only consist of parentheses,
brackets and curly braces: ()[]{}.

What is considered Valid?
A string of braces is considered valid if all braces are matched with the
correct brace.

Examples
"(){}[]"   =>  True
"([{}])"   =>  True
"(}"       =>  False
"[(])"     =>  False
"[({})](]" =>  False */

#include <string>
#include <unordered_map>
#include <vector>

using std::string;
using std::unordered_map;
using std::vector;

bool valid_braces(string braces)
{
    bool ret = true;
    unordered_map<char, char> pairs({{')', '('}, {']', '['}, {'}', '{'}});
    string open = "([{";
    vector<char> open_order;
    for (size_t i = 0; i < braces.length(); i++)
    {
        if (open.find_first_of(braces[i]) != std::string::npos)
        {
            open_order.push_back(braces[i]);
        }
        else
        {
            if (open_order.size() > 0 && pairs[braces[i]] == open_order.back())
            {
                open_order.pop_back();
            }
            else
            {
                ret = false;
            }
        }
    }
    return (open_order.size() == 0 && ret) ? true : false;
}