// success
// https://leetcode.com/problems/fibonacci-number/submissions/
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
    // Solution v1.0: Time complexity: O(n) ~ 12ms - Memory: 5.9mb
    // int fib(int n)
    // {
    //     if (n == 0 || n == 1)
    //         return n;
    //     return fib(n - 1) + fib(n - 2);
    // }

    // Solution v2.0: Time complexity: O(n) ~ 0ms - Memory: 5.9mb
    int fib(int n)
    {
        if (n == 0 || n == 1)
            return n;
        int f1 = 0, f2 = 1;
        int f3 = 0;
        int i = 1;
        while (i++ < n)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
};

int main()
{
    Solution s;
    cout << s.fib(5) << endl;
    return 0;
}