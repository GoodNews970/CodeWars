/* Task:
Your task is to write a function which returns the sum of following series upto nth term(parameter).

Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
Rules:
You need to round the answer to 2 decimal places and return it as String.

If the given value is 0 then it should return 0.00

You will only be given Natural Numbers as arguments.

Examples:
SeriesSum(1) => 1 = "1.00"
SeriesSum(2) => 1 + 1/4 = "1.25"
SeriesSum(5) => 1 + 1/4 + 1/7 + 1/10 + 1/13 = "1.57"
NOTE: In PHP the function is called series_sum(). */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


char *series_sum(const size_t n)
{
    char * result = malloc(100);
    if (n == 0)
    {
        double sum = 0;
        sprintf(result, "%.2f\0", sum);
        return result;
    }
    else
    {
        double sum = 1;
        for (double i = 1; i < n; i++)
        {
            sum += 1 / (4 + (3 * (i - 1)));
            printf("New sum: %.2f\n", sum);
        }
        sprintf(result, "%.2f\0", sum);
        return result;
    }
}

int main(void)
{
    printf("%s", series_sum(0));
}