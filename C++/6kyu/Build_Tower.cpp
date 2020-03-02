/* Build Tower
Build Tower by the following given argument:
number of floors (integer and always greater than 0).

Tower block is represented as *

Python: return a list;
JavaScript: returns an Array;
C#: returns a string[];
PHP: returns an array;
C++: returns a vector<string>;
Haskell: returns a [String];
Ruby: returns an Array;
Have fun!

for example, a tower of 3 floors looks like below

[
  '  *  ', 
  ' *** ', 
  '*****'
]
and a tower of 6 floors looks like below

[
  '     *     ', 
  '    ***    ', 
  '   *****   ', 
  '  *******  ', 
  ' ********* ', 
  '***********'
]
Go challenge Build Tower Advanced once you have finished this :) */

#include <vector>
#include <string>

using std::string;
using std::vector;

class Kata
{
public:
    vector<string> towerBuilder(int nFloors)
    {
        vector<string> ret;
        string buffer, spaces;
        for (int i = 1, j = 1; i <= (nFloors * 2) - 1; i += 2, j += 1)
        {
            buffer = string(i, '*');
            if (nFloors - j > 0)
            {
                spaces = string(nFloors - j, ' ');
                buffer = spaces + buffer + spaces;
            }
            ret.push_back(buffer);
        }
        return ret;
    }
};