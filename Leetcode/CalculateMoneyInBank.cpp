// success
// https://leetcode.com/problems/calculate-money-in-leetcode-bank/
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
    int totalMoney(int n)
    {
        int res = 0;
        int week = n / 7;
        int day = n % 7;
        for (int i = 0; i < week; i++)
            res += 28 + 7 * i; // 28 is total sum from 1 -> 7, then we plus with 7 * i for subsequent week
        res += double((day + week) + (1 + week)) * double(day) / 2.0;
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.totalMoney(4) << endl;
    return 0;
}