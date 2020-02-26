/* Triangular Treasure

Triangular numbers are so called because of the equilateral triangular
shape that they occupy when laid out as dots. i.e.

1st (1)   2nd (3)    3rd (6)
*          **        ***
           *         **
                     *
You need to return the nth triangular number. You should return 0 for
out of range values:

  triangular(0);   // returns 0
  triangular(2);   // returns 3
  triangular(3);   // returns 6
  triangular(-10); // returns 0 */

int triangular(int n)
{
  return (n <= 0) ? 0 : (n * (n + 1)) / 2;
}