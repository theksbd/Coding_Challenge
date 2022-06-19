//success
//https://www.codewars.com/kata/514b92a657cdc65150000006/train/java
package com.codewars;

public class MultiplesOf3Or5 {
    public int solution(int number) {
        //TODO: Code stuff here
        number--;
        int sumOfMultiples = 0;
        while (number > 2) {
            boolean isAdd = number % 3 == 0 || number % 5 == 0;
            if (isAdd)
                sumOfMultiples += number;
            number--;
        }
        return sumOfMultiples;
    }

    public static void main(String[] args) {
        MultiplesOf3Or5 a = new MultiplesOf3Or5();
        System.out.println(a.solution(10));
    }
}
