/* Roman Numerals Encoder

Create a function taking a positive integer as its parameter and returning a
string containing the Roman Numeral representation of that integer.

Modern Roman numerals are written by expressing each digit separately starting
with the left most digit and skipping any digit with a value of zero. In Roman
numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is
written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending
order: MDCLXVI.

Example:

solution(1000); // should return "M"
Help:

Symbol    Value
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000
Remember that there can't be more than 3 identical symbols in a row.

More about roman numerals - http://en.wikipedia.org/wiki/Roman_numerals */

#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using std::count;
using std::string;
using std::to_string;
using std::vector;

string solution(int number)
{
    string ret;
    vector<char> symbol = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    vector<int> value = {1000, 500, 100, 50, 10, 5, 1};
    int i = 0;
    int tmp = 0;
    while (number > 0)
    {
        tmp = floor(number / value[i]);
        if (tmp > 0 && tmp <= 3)
        {
            string tmpstr = string(tmp, symbol[i]);
            ret += tmpstr;
            number = number % value[i];
        }
        else if (tmp > 3)
        {
            number += value[i - 1] * count(ret.begin(), ret.end(), symbol[i - 1]);
            int j = 1;
            if (value[i - j] < number)
            {
                j++;
            }
            if (ret.length() >= 1 && j > 1)
            {
                ret.pop_back();
            }
            tmp = 0;
            while (value[i - j] - (value[i] * tmp) > number)
            {
                tmp++;
            }
            string tmpstr = string(tmp, symbol[i]) + symbol[i - j];
            ret += tmpstr;
            number = number % (value[i - j] - (value[i] * tmp));
        }
        i++;
    }
    return ret;
}