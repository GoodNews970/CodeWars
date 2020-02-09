// Main class to test kata classes.

import _8kyu.*;

public class Main {
    public static void main(final String args[]) {
        final int[] array = { 1, 2, 3, 5 };
        final int[] invertedarray = Invert_values.invert(array);
        final int sum = Sum_without_highest_and_lowest_number.sum(array);
        final boolean approval = The_Feast_of_Many_Beasts.feast("Lion", "Lemon");
        System.out.println("The inverted array is " + java.util.Arrays.toString(invertedarray) + "\n");
        System.out.println("The sum is " + sum + "\n");
        System.out.println("The lion has approval: " + approval + "\n");
    }
    
}