/* Round to the next multiple of 5

Given an integer as input, can you round it to the next (meaning, "higher") 5?

Examples:

input:    output:
0    ->   0
2    ->   5
3    ->   5
12   ->   15
21   ->   25
30   ->   30
-2   ->   0
-5   ->   -5
etc.
Input may be any positive or negative integer (including 0).

You can assume that all inputs are valid integers. */

function roundToNext5(n) {
    i = 0;
    while ((n + i) % 5 != 0) {
        i += 1;
    }
    return n + i;
}