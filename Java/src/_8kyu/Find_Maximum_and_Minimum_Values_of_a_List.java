/* Find Maximum and Minimum Values of a List

Your task is to make two functions, max and min (maximum and minimum in PHP and Python) that take a(n) array/vector of integers list as input and outputs, respectively, the largest and lowest number in that array/vector.

#Examples

max({4,6,2,1,9,63,-134,566}) returns 566
min({-52, 56, 30, 29, -54, 0, -110}) returns -110
max({5}) returns 5
min({42, 54, 65, 87, 0}) returns 0 */

package _8kyu;

public class Find_Maximum_and_Minimum_Values_of_a_List {

    public static int min(final int[] list) {
      int mn = 10000;
      for (int i = 0; i < list.length; i++) {
        if (list[i] < mn) {
          mn = list[i];
        }
      }
      return mn;
    }
    
    public static int max(final int[] list) {
      int mx = -10000;
      for (int i = 0; i < list.length; i++) {
        if (list[i] > mx) {
          mx = list[i];
        }
      }
      return mx;
    }
    
}