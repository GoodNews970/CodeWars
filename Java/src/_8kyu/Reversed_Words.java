/* Reversed Words

Complete the solution so that it reverses all of the words within the string passed in.

Example:

ReverseWords.reverseWords("The greatest victory is that which requires no battle");
// should return "battle no requires which that is victory greatest The" */

package _8kyu;

public class Reversed_Words {

    public static String reverseWords(String str) {
        String[] tmp = str.split(" ");
        String[] ret = new String[tmp.length];
        for (int i = tmp.length - 1, j = 0; i >= 0; i--, j++) {
            if (i != 0) {
                ret[j] = tmp[i] + " ";
            } else {
                ret[j] = tmp[i];
            }
        }
        return String.join("", ret);
    }

}