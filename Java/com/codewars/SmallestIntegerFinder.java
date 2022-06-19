//success
//https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/java
package com.codewars;

public class SmallestIntegerFinder
{
    public static int findSmallestInt(int[] args)
    {
        int minValue = args[0];
        for (int i = 1; i < args.length; i++)
        {
            if (minValue > args[i])
                minValue = args[i];
        }
        return minValue;
    }

    public static void main(String[] args)
    {
        int[] array = {34, 15, 88, 2};
        System.out.println(findSmallestInt(array));
    }
}
