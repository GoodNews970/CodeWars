/* Convert a string to an array

Write a function to split a string and convert it into an array of words. For example:

"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
 */

package _8kyu;

public class Convert_a_string_to_an_array {

    public static String[] stringToArray(String s) {
      return s.split(" ", s.length());
    }

}