// success
// https://leetcode.com/problems/self-dividing-numbers/
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

using namespace std;

class Solution
{
public:
    bool isSelfDividing(int n)
    {
        int temp = n;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit == 0 || temp % digit != 0)
                return false;
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> res;
        for (int val = left; val <= right; val++)
        {
            if (val % 10 == 0)
                continue;
            if (isSelfDividing(val) || val < 10)
                res.push_back(val);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = s.selfDividingNumbers(1, 22);
    for (int x : v)
        cout << x << " ";
    return 0;
}