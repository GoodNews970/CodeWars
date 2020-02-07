/* Highest and Lowest

In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

Example:

highAndLow("1 2 3 4 5");  // return "5 1"
highAndLow("1 2 -3 4 5"); // return "5 -3"
highAndLow("1 9 3 4 -5"); // return "9 -5"
Notes:

All numbers are valid Int32, no need to validate them.
There will always be at least one number in the input string.
Output string must be two numbers separated by a single space, and highest number is first. */

#include <iostream>
#include <string>
#include <cstring>

using std::string;

string highAndLow(string numbers)
{
    std::cout << numbers << "\n";
    char copy[10000];
    size_t length = numbers.copy(copy, numbers.length(), 0);
    char *token = strtok(copy, " ");
    int max = -1000, min = 1000;
    while (token != NULL)
    {
        if (atoi(token) > max)
        {
            max = atoi(token);
        }
        if (atoi(token) < min)
        {
            min = atoi(token);
        }
        token = strtok(NULL, " ");
    }
    std::string result = std::to_string(max) + " " + std::to_string(min);
    return(result);
}

int main()
{
    std::string result = highAndLow("1 -1 0");
    std::cout << result;
}