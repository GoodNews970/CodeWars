/* Reverse words

Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

Examples
"This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps" */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *reverseWords(const char *text)
{
    char *result = malloc(strlen(text) + 1);
    char *temp = malloc(strlen(text) + 1);
    char *tok = malloc(strlen(text) + 1);
    strcpy(temp, text);
    tok = strtok(temp, " ");
    size_t i = strlen(tok);
    size_t j = 0;
    if (text[j] == ' ')
    {
        result[j] = ' ';
        j++;
    }
    while (i > 0)
    {
        result[j] = tok[i - 1];
        i--;
        j++;
    }
    while (tok = strtok(NULL, " "))
    {
        result[j] = ' ';
        j++;
        if (text[j] == ' ')
        {
            result[j] = ' ';
            j++;
        }
        i = strlen(tok);
        while (i > 0)
        {
            result[j] = tok[i - 1];
            i--;
            j++;
        }
    }
    return result;
}

int main(void)
{
    const char* test_str = "The quick brown fox jumps over the lazy dog.";
    const char* expected = "ehT kciuq nworb xof spmuj revo eht yzal .god";
    char* submitted = reverseWords(test_str);
    printf("The test string is       %s\nThe expected string is   %s\nThe actual string is     %s\n", test_str, expected, submitted);
}


/*
This passes all of the sample tests except for the last:    "The quick brown fox jumps over the lazy dog."
On my local computer, my code correctly yields:             "ehT kciuq nworb xof spmuj revo eht yzal .god"
In the test environment, it incorrectly yields:             "ehT kciuq nworb xof spmuj revo eht yzal .godubmitted) isA"
*/