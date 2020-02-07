/* String repeat

Write a function called repeatString which repeats the given String src exactly count times.

repeatStr(6, "I") // "IIIIII"
repeatStr(5, "Hello") // "HelloHelloHelloHelloHello" */

#include <string.h>

char *repeat_str(size_t count, const char *src)
{
    char *repeat = malloc(strlen(src) * count * sizeof *repeat);
    strcpy(repeat, src);
    for (size_t i = 1; i < count; i++)
    {
        strcat(repeat, src);
    }
    return repeat;
}