/* Shortest Word

Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types. */

#include <string.h>

size_t find_short(const char *s)
{
    size_t orig_l = strlen(s);
    char copy[orig_l];
    strcpy(copy, s);
    char *split = strtok(copy, " ");
    size_t smallest = 100;
    while (split != NULL)
    {
        size_t split_l = strlen(split);
        if (split_l < smallest)
        {
            smallest = split_l;
        }
        split = strtok(NULL, " ");
    }
    return smallest;
}