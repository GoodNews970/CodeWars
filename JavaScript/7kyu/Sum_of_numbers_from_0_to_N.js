/* Sum of numbers from 0 to N

Description:

We want to generate a function that computes the series starting from 0 and
ending until the given number.

Example:
Input:

> 6
Output:

0+1+2+3+4+5+6 = 21

Input:

> -15
Output:

-15<0

Input:

> 0
Output:

0=0 */

var SequenceSum = (function () {
    function SequenceSum() { }

    SequenceSum.showSequence = function (count) {
        if (count < 0) {
            var ret = "<"
            return count + ret + 0
        } else if (count == 0) {
            return "0=0"
        } else {
            var sum = 0
            var ret = "0"
            for (let index = 1; index <= count; index++) {
                sum += index
                ret += "+" + index
            }
            return ret + " = " + sum
        }
    };

    return SequenceSum;

})();