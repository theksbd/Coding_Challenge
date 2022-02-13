// success
// https://leetcode.com/problems/n-th-tribonacci-number/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    // Solution v1.0: Time complexity: O(n) ~ Time Limit Exceeded - Memory: Can't calculate
    // int tribonacci(int n)
    // {
    //     if (n == 0 || n == 1)
    //         return n;
    //     if (n == 2)
    //         return 1;
    //     return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    // }

    // Solution v2.0: Time complexity: O(n) ~ 0ms - Memory: 5.9mb
    int tribonacci(int n)
    {
        if (n == 0 || n == 1)
            return n;
        if (n == 2)
            return 1;
        int f1 = 0, f2 = 1, f3 = 1;
        int f4 = 0;
        int i = 2;
        while (i++ < n)
        {
            f4 = f1 + f2 + f3;
            f1 = f2;
            f2 = f3;
            f3 = f4;
        }
        return f4;
    }
};

int main()
{
    Solution s;
    cout << s.tribonacci(5) << endl;
    return 0;
}