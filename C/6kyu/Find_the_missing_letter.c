/* Find the missing letter

Write a method that takes an array of consecutive (increasing) letters as input
and that returns the missing letter in the array.

You will always get an valid array. And it will be always exactly one letter be
missing. The length of the array will always be at least 2.
The array will always contain letters in only one case.

Example:

['a','b','c','d','f'] -> 'e'
['O','Q','R','S'] -> 'P'
["a","b","c","d","f"] -> "e"
["O","Q","R","S"] -> "P"
(Use the English alphabet with 26 letters!)

Have fun coding it and please don't forget to vote and rank this kata! :-)

I have also created other katas. Take a look if you enjoyed this kata! */

#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char findMissingLetter(char array[], int arrayLength)
{
    char *al = "abcdefghijklmnopqrstuvwxyz", *p1, *p2;
    int gap;
    for (size_t i = 1; i < arrayLength; i++)
    {
        p1 = strchr(al, tolower(array[i - 1]));
        p2 = strchr(al, tolower(array[i]));
        gap = p2 - p1;
        if (gap > 1)
        {
            break;
        }
    }
    return (array[0] == tolower(array[0]))
               ? *p1 + gap - 1
               : toupper(*p1 + gap - 1);
}