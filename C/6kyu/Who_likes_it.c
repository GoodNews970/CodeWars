/* Who likes it?

You probably know the "like" system from Facebook and other pages. People can
"like" blog posts, pictures or other items. We want to create the text that
should be displayed next to such an item.

Implement a function likes :: [String] -> String, which must take in input
array, containing the names of people who like an item. It must return the
display text as shown in the examples:

* return must be an allocated string
* do not mutate input

likes({})
    // should return "no one likes this"

likes({"Peter"})
    // should return "Peter likes this"

likes({"Jacob", "Alex"})
    // should return "Jacob and Alex like this"

likes({"Max","John","Mark"})
    // should return "Max, John and Mark like this"

likes({"Alex", "Jacob", "Mark", "Max"})
    // should return "Alex, Jacob and 2 others like this"
For 4 or more names, the number in and 2 others simply increases. */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *likes(size_t n, char const *const names[n])
{
    char buffer[50];
    char *ret;
    ret = malloc(n*sizeof(char)*100);
    switch (n)
    {
    case 0:
        strcpy(buffer, "no one likes this");
        break;
    case 1:
        sprintf(buffer, "%s likes this", names[0]);
        break;
    case 2:
        sprintf(buffer, "%s and %s like this", names[0], names[1]);
        break;
    case 3:
        sprintf(buffer, "%s, %s and %s like this", names[0], names[1], names[2]);
        break;
    default:
        sprintf(buffer, "%s, %s and %lu others like this", names[0], names[1], n - 2);
        break;
    }
    strcpy(ret, buffer);
    return ret;
}