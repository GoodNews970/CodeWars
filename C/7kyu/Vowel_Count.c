/* Vowel Count

Return the number (count) of vowels in the given string.

We will consider a, e, i, o, and u as vowels for this Kata.

The input string will only consist of lower case letters and/or spaces. */

#include <stddef.h>
#include <string.h>

size_t get_count(const char *s)
{
    size_t vc = 0;
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (strchr("aeiouAEIOU", s[i]))
        {
            ++vc;
        }
    }
    return vc;
}