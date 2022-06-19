//https://www.codewars.com/kata/5813d19765d81c592200001a/train/java
package com.codewars;

public class DontGiveMeFive {
    public static int dontGiveMeFive(int start, int end) {
        int res = end - start + 1;
        int multipleOf5 = 5;
        int number = 1;
        while (multipleOf5 < end) {
            multipleOf5 = multipleOf5 * number;
            if (multipleOf5 >= start)
                res--;
            number += 2;
        }
        return res;
    }

    public static void main(String[] args) {
        System.out.println(dontGiveMeFive(4, 17));
    }
}
