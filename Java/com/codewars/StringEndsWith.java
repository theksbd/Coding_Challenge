//success
//https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/java
package com.codewars;

public class StringEndsWith {
    public static boolean solution(String str, String ending) {
        int endingLength = ending.length();
        int strLength = str.length();
        if (endingLength > strLength)
            return false;
        String subStr = str.substring(strLength - endingLength);
        return subStr.equals(ending);
    }

    public static void main(String[] args) {
        System.out.println(solution("abc", "abcd"));
    }
}
