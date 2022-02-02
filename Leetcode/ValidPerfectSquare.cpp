// success
// https://leetcode.com/problems/valid-perfect-square/
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
    bool isPerfectSquare(int num)
    {
        long long left = 0;
        long long right = INT_MAX;
        long long res = 0;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            if (mid * mid <= num)
            {
                res = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return res * res == num;
    }
};

int main()
{
    Solution s;
    cout << s.isPerfectSquare(16) << endl;
    return 0;
}