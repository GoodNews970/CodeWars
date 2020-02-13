/* If you can't sleep, just count sheep!!

If you can't sleep, just count sheep!!

Task:
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid,
i.e. no negative integers. */

package _8kyu;

class If_you_cant_sleep_just_count_sheep {

  public static String countingSheep(int num) {
    StringBuilder ret = new StringBuilder();
    for (int i = 1; i <= num; i++) {
      ret.append(Integer.toString(i) + " sheep...");
    }
    return ret.toString();
  }

}