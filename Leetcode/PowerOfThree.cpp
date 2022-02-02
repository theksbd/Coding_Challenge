// success
// https://leetcode.com/problems/power-of-three/
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
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;
        if (n % 2 == 0)
            return false;
        if (n % 3 != 0 && n != 1)
            return false;
        while (n > 1)
        {
            if (n % 3 != 0)
                return false;
            n /= 3;
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfThree(1) << endl;
    return 0;
}