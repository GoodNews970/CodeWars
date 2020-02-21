/* Sorted? yes? no? how?

Complete the method which accepts an array of integers, and returns one of the
following:

"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
You can assume the array will always be valid, and there will always be one
correct answer. */

package _7kyu;

import java.util.Arrays;

public class Sorted_yes_no_how {

    public static String isSortedAndHow(int[] array) {
        int[] tmpasc = array.clone();
        Arrays.sort(tmpasc, 0, tmpasc.length);
        int[] tmp = tmpasc.clone();
        int[] tmpdesc = new int[array.length];
        for (int i = tmp.length-1, j = 0; i >= 0; i--, j++) {
            tmpdesc[j] = tmp[i];
        }
        return (Arrays.equals(array, tmpasc))  ? "yes, ascending"  :
               (Arrays.equals(array, tmpdesc)) ? "yes, descending" : "no";
    }

}
