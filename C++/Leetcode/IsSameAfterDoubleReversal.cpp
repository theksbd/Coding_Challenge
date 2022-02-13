// success
// https://leetcode.com/problems/a-number-after-a-double-reversal/
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
    bool isSameAfterReversals(int num)
    {
        return (num == 0) || (num % 10 != 0);
    }
};

int main()
{
    Solution s;
    cout << s.isSameAfterReversals(946) << endl;
    return 0;
}