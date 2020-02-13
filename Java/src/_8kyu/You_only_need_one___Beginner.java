/* You only need one - Beginner

You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

Array can contain numbers or strings. X can be either.

Return true if the array contains the value, false if not. */

package _8kyu;

import java.util.Arrays;

public class You_only_need_one___Beginner {

    public static boolean check(Object[] a, Object x) {
        return Arrays.asList(a).contains(x);
    }

}