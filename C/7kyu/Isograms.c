/* Isograms

An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string
that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

isIsogram "Dermatoglyphics" == true
isIsogram "aba" == false
isIsogram "moOse" == false -- ignore letter case */

#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool IsIsogram(char *str)
{
    bool isogram = true;
    for (size_t i = 0; i < strlen(str); i++)
    {
        int count = 0;
        for (size_t ii = 0; ii < strlen(str); ii++)
        {
            if (tolower(str[i]) == tolower(str[ii]))
            {
                count += 1;
            }
            if (count > 1)
            {
                isogram = false;
                i = ii = 1000;
                break;
            }
        }
    }
    return isogram;
}