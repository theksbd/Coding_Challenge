//success
//https://www.hackerrank.com/challenges/java-interface/problem?isFullScreen=true
package com.hackerrank;

import java.util.*;

interface AdvancedArithmetic{
  int divisor_sum(int n);
}

//Write your code here
class MyCalculator implements AdvancedArithmetic {
    @Override
    public int divisor_sum (int n) {
        if (n <= 1)
            return n;
        int sum = 1 + n;
        double square = Math.sqrt(n * 1.0);
        for (int i = 2; i <= (int)square; i++) {
            if (n % i == 0) {
                sum += i;
                int q = n / i;
                if (q != i) {
                    sum += q;
                }
            }
        }
        return sum;
    }
}

class Solution{
    public static void main(String []args){
        MyCalculator my_calculator = new MyCalculator();
        System.out.print("I implemented: ");
        ImplementedInterfaceNames(my_calculator);
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(my_calculator.divisor_sum(n) + "\n");
      	sc.close();
    }
    /*
     *  ImplementedInterfaceNames method takes an object and prints the name of the interfaces it implemented
     */
    static void ImplementedInterfaceNames(Object o){
        Class[] theInterfaces = o.getClass().getInterfaces();
        for (int i = 0; i < theInterfaces.length; i++){
            String interfaceName = theInterfaces[i].getName();
            System.out.println(interfaceName);
        }
    }
}


