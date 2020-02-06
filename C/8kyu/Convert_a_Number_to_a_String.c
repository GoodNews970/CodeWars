/* We need a function that can transform a number into a string.

What ways of achieving this do you know?

In C, return a dynamically allocated string that will be freed by the test suite.

Examples:
number_to_string(123) // "123"
number_to_string(999) // "999" */

#include <stdlib.h>
#include <stdio.h>

const char* number_to_string(int number) {

    char* result = malloc(1 * sizeof(char));
    sprintf(result, "%d", number); 
    return result;

}