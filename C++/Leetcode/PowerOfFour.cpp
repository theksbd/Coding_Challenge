// success
// https://leetcode.com/problems/power-of-four/
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
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
            return false;
        if (n == 1)
            return true;
        if (n % 3 == 0)
            return false;
        while (n > 1)
        {
            if (n % 4 != 0)
                return false;
            n /= 4;
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfFour(1) << endl;
    return 0;
}