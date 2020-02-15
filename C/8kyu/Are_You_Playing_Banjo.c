/* Are You Playing Banjo?

Create a function which answers the question "Are you playing banjo?".
If your name starts with the letter "R" or lower case "r", you are playing banjo!

The function takes a name as its only argument, and returns one of the following strings:

name + " plays banjo" 
name + " does not play banjo"
Names given are always valid strings. */

#include <stdio.h>

char *are_you_playing_banjo(const char *name)
{
    char *ret = malloc(sizeof(name) + sizeof(" does not play banjo"));
    if (name[0] == 'R' || name[0] == 'r')
    {
        sprintf(ret, "%s plays banjo", name);
    }
    else
    {
        sprintf(ret, "%s does not play banjo", name);
    }
    return ret;
}