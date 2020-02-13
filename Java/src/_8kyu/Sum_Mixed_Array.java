/* Sum Mixed Array

Given an array of integers as strings and numbers, return the sum of the array values as if all were numbers.

Return your answer as a number. */

package _8kyu;

import java.util.List;

public class Sum_Mixed_Array {

	public int sum(List<?> mixed) {
        int sum = 0;
        String tmp;
        for (Object object : mixed) {
            tmp = object.toString();            
            sum += Integer.parseInt(tmp);
        }
		return sum;
    }
    
}