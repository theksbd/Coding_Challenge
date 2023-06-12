// success
// https://www.hackerrank.com/challenges/lisa-workbook/problem?isFullScreen=true

package com.hackerrank;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'workbook' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. INTEGER k
     *  3. INTEGER_ARRAY arr
     */

    public static int workbook(int n, int k, List<Integer> arr) {
    // Write your code here
        int res = 0;
        int currentPage = 1;
        for (int i = 0; i < arr.size(); i++) {
            int numberOfProblems = arr.get(i);
            int newCurrentPage = currentPage + numberOfProblems / k;
            if (numberOfProblems % k > 0) {
                newCurrentPage++;
            }
            int problems = 0;
            int newProblems = Math.min(numberOfProblems, k);
            for (int j = currentPage; j <= newCurrentPage; j++) {
                if (problems < j && j <= newProblems) {
                    res++;
                }
                numberOfProblems -= k;
                problems = newProblems;
                newProblems += Math.min(numberOfProblems, k);
            }
            currentPage = newCurrentPage;
        }
        return res;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int n = Integer.parseInt(firstMultipleInput[0]);

        int k = Integer.parseInt(firstMultipleInput[1]);

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        int result = Result.workbook(n, k, arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
