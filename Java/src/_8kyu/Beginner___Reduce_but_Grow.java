/* Beginner - Reduce but Grow

Given a non-empty array of integers, return the result of multiplying the values together in order. Example:

[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24 */

package _8kyu;

public class Beginner___Reduce_but_Grow{

    public static int grow(int[] x){
      int prod = 1;
      for (int i = 0; i < x.length; i++) {
        prod *= x[i];
      }  
      return prod;    
    }
  
  }