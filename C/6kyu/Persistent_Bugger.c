/* Persistent Bugger

Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence,
which is the number of times you must multiply the digits in num until you reach a single digit.

For example:

p25 == 2 // 2*5 = 10, 1*0 = 0;

 persistence(for: 39) === 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                       // and 4 has only one digit

 persistence(for: 999) === 4 // because 9*9*9 = 729, 7*2*9 = 126,
                        // 1*2*6 = 12, and finally 1*2 = 2

 persistence(for: 4) === 0 // because 4 is already a one-digit number */

int digitCount(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int digitProduct(int num)
{
    int product = 1;
    while (num != 0)
    {
        product *= (num % 10);
        num /= 10;
    }
    return product;
}

int persistence(int n)
{
    int mp = 0;
    while (digitCount(n) > 1)
    {
        mp++;
        n = digitProduct(n);
    }
    return mp;
}

int main(void)
{
    printf("%d\n", persistence(999));
}