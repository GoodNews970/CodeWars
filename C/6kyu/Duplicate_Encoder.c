/* Duplicate Encoder

The goal of this exercise is to convert a string to a new string where each
character in the new string is "(" if that character appears only once in the
original string, or ")" if that character appears more than once in the original
string. Ignore capitalization when determining if a character is a duplicate.

Examples
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))((" 
Notes

Assertion messages may be unclear about what they display in some languages. If
you read "...It Should encode XXX", the "XXX" is the expected result, not the
input! */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *DuplicateEncoder(char *text)
{
  // First (nested) pass to build duplication vector
  char dupes[1000] = "", c[2] = "";
  for (size_t i = 0; i < strlen(text); i++)
  {
    if (strchr(dupes, tolower(text[i])))
    {
      continue;
    }
    for (size_t j = i + 1; j < strlen(text); j++)
    {
      if (tolower(text[i]) == tolower(text[j]))
      {
        c[0] = tolower(text[i]);
        strcat(dupes, c);
        break;
      }
    }
  }

  // Second pass to convert
  char *ret = malloc(sizeof(text));
  strcpy(ret, text);
  for (size_t i = 0; i < strlen(ret); i++)
  {
    ret[i] = (strchr(dupes, tolower(ret[i]))) ? ')' : '(';
  }
  ret[strlen(ret)] = '\0';
  return ret;
}