// success
// https://leetcode.com/problems/sqrtx/
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
    int mySqrt(int x)
    {
        long long left = 0;
        long long right = INT_MAX;
        long long res = 0;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            if (mid * mid <= x)
            {
                res = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.mySqrt(16) << endl;
    return 0;
}