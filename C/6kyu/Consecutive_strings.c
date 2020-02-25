/* Consecutive strings

You are given an array strarr of strings and an integer k. Your task is
to return the first longest string consisting of k consecutive strings taken in
the array.

Example:
longest_consec(["zone", "abigail", "theta", "form", "libe", "zas", "theta",
"abigail"], 2) --> "abigailtheta"

n being the length of the string array, if n = 0 or k > n or k <= 0 return "".

Note consecutive strings : follow one after another without an interruption */

//n is strarr size

#include <stdlib.h>
#include <string.h>

char *longestConsec(char *strarr[], int n, int k)
{
    char *ret, buffer[10000] = "";
    ret = malloc(10000);
    if (n == 0 || k > n || k <= 0)
    {
        strcpy(ret, "");
    }
    else
    {
        int mx = 0, indx = 0;
        for (int i = n - 1; i >= k - 1; i--)
        {
            int tmpmx = 0;
            for (int j = i, ktmp = 1; ktmp <= k; j--, ktmp++)
            {
                tmpmx += strlen(strarr[j]);
            }
            if (tmpmx >= mx)
            {
                mx = tmpmx;
                indx = i;
            }
        }
        for (size_t i = indx - (k - 1); i <= indx; i++)
        {
            strcat(buffer, strarr[i]);
        }
        strcpy(ret, buffer);
    }
    return ret;
}

int main(void)
{
    char *a1[] = {"zone", "abigail", "theta", "form", "libe", "zas", "theta",
                  "abigail"};
    printf("The returned string is: %s\n", longestConsec(a1, 8, 2));
}