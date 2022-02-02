// success
// https://leetcode.com/problems/climbing-stairs/
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
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
            return n;
        int f1 = 0, f2 = 1;
        int f3 = 0;
        int i = 0;
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
    cout << s.climbStairs(5) << endl;
    return 0;
}