/* Sum of odd numbers

Given the triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...
Calculate the row sums of this triangle from the row index (starting at index 1) e.g.:

rowSumOddNumbers(1); // 1
rowSumOddNumbers(2); // 3 + 5 = 8 */

#include <vector>
#include <numeric>

long long rowSumOddNumbers(unsigned n)
{
    std::vector<int> vect;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            vect.push_back(i);
        }
    }
    vect.erase(vect.begin(), vect.end()-n);
    long long sum = std::accumulate(vect.begin(), vect.end(), 0);
    return(sum);
}