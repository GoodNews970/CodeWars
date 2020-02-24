/* Vasya - Clerk

The new "Avengers" movie has just been released! There are a lot of people at
the cinema box office standing in a huge line. Each of them has a single 100, 50
or 25 dollar bill. An "Avengers" ticket costs 25 dollars.

Vasya is currently working as a clerk. He wants to sell a ticket to every single
person in this line.

Can Vasya sell a ticket to every person and give change if he initially has no
money and sells the tickets strictly in the order people queue?

Return YES, if Vasya can sell a ticket to every person and give change with the
bills he has at hand at that moment. Otherwise return NO.

Examples:
tickets(3, {25, 25, 50}) // => true
tickets(2, {25, 100}) // => false. Vasya will not have enough money to give
change to 100 dollars
tickets(5, {25, 25, 50, 50, 100}) // => false. Vasya will not have the right
bills to give 75 dollars */

#include <stdlib.h>
#include <stdbool.h>

int tickets(size_t length, const int people[length])
{
    int t1 = 0, t2 = 0, t3 = 0;
    bool ret = true;
    for (size_t i = 0; i < length; i++)
    {
        switch (people[i])
        {
        case 25:
            t1++;
            break;
        case 50:
            if (t1 >= 1)
            {
                t1--;
                t2++;
            }
            else
            {
                ret = false;
            }
            break;
        default:
            if (t1 >= 1 && t2 >= 1)
            {
                t1--;
                t2--;
                t3++;
            }
            else if (t1 >= 3)
            {
                t1--;
                t1--;
                t1--;
                t3++;
            }
            else
            {
                ret = false;
            }
            break;
        }
    }
    return ret;
}