/* Find numbers which are divisible by given number

Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor.
First argument is an array of numbers and the second is the divisor.

Example
divisible_by({1, 2, 3, 4, 5, 6}, 2) == {2, 4, 6} */

#include <vector>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> ret;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % divisor == 0)
        {
            ret.push_back(numbers[i]);
        }        
    }
    return ret;
}