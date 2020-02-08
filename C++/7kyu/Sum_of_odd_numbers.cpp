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
    int n_odd = 0;
    for (size_t i = 0; i < n; i++)
    {
        n_odd += n - i;
    }
    std::vector<int> vect;
    int i = 0;
    while (vect.size() < n_odd)
    {
        if (i % 2 == 1)
        {
            vect.push_back(i);
        }
        i++;
    }
    vect.erase(vect.begin(), vect.end() - n);
    long long sum = std::accumulate(vect.begin(), vect.end(), 0);
    return (sum);
}