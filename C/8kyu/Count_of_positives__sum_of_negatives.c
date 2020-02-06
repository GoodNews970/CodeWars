/* Count of positives / sum of negatives

Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.

If the input array is empty or null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65]. */

#include <stddef.h>
#include <stdio.h>

int count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum) 
{
    int pc=0, ns=0;
    for (size_t i = 0; i < count; i++)
    {
       if (values[i] < 0)
       {
           ns += values[i];
       } 
       else 
       {
           pc += 1;
       }
    }
    
    positivesCount = &pc;
    negativesSum = &ns;
    int result[] = {*positivesCount, *negativesSum};
    return result;
}  

int main(void)
{
    int array[] = {1,2,3,4,-5,-5};
    size_t count = 6;
    int *positivesCount;
    int *negativeSum;
    count_positives_sum_negatives(array, count, positivesCount, negativeSum);
}