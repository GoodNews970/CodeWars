/* Descending Order

Your task is to make a function that can take any non-negative integer as a argument and return it with its digits in descending order.
Essentially, rearrange the digits to create the highest possible number.

Examples:
Input: 21445 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321 */

package _7kyu;

import java.util.Collections;
import java.util.Vector;

public class Descending_Order {

    public static int sortDesc(final int num) {
      String[] str = Integer.toString(num).split("");
      Vector<Integer> vec = new Vector<Integer>();
      for (String string : str) {
        vec.add(Integer.parseInt(string));
      }
      Collections.sort(vec);
      String result = "";
      for (int i = 1; i <= vec.size(); i++) {
        result = result.concat(Integer.toString(vec.get(vec.size()-i)));        
      }
      return Integer.parseInt(result); // Integer.valueOf(temp);
    }

  }


/*
Note: compare and adjust my solution using snippet below to further develop understanding of Java.

import java.util.Comparator;
import java.util.stream.Collectors;

public class DescendingOrder {
    public static int sortDesc(final int num) {
        return Integer.parseInt(String.valueOf(num)
                                      .chars()
                                      .mapToObj(i -> String.valueOf(Character.getNumericValue(i)))
                                      .sorted(Comparator.reverseOrder())
                                      .collect(Collectors.joining()));
 */