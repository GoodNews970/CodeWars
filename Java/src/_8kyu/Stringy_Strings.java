/* Stringy Strings

write me a function stringy that takes a size and returns a string of alternating '1s' and '0s'.

the string should start with a 1.

a string with size 6 should return :'101010'.

with size 4 should return : '1010'.

with size 12 should return : '101010101010'.

The size will always be positive and will only use whole numbers. */

package _8kyu;

public class Stringy_Strings {

    public static String stringy(int size) {
        StringBuilder ret = new StringBuilder();
        for (int i = 0, j = 1; i < size; i++) {
            if (i % 2 == 0) {
                j = 1;
                ret.append(j); 
            } else {
                j = 0;
                ret.append(j); 
            }
        }
        return ret.toString();
    }

}