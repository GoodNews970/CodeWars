/* Replace With Alphabet Position

Welcome.

In this kata you are required to, given a string, replace every letter with its
position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
alphabet_position("The sunset sets at twelve o' clock.");
Should return"20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15
3 11" (as a string)  */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char *alphabet_position(char *text)
{
    char *ret;
    ret = malloc(1000);
    char buffer[10];
    char *al = "abcdefghijklmnopqrstuvwxyz";
    char *tmp;
    int i = 0, j = 0, index = 0;
    while (text[i] != '\0')
    {
        tmp = strchr(al, tolower(text[i]));
        if (tmp != NULL)
        {
            index = (int)(tmp - al) + 1;
            sprintf(buffer, "%d ", index);
            strcat(ret, buffer);
            j++;
        }
        i++;
    }
    ret[strlen(ret)-1] = '\0';
    return ret;
}