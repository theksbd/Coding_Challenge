// success
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
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
    int numberOfSteps(int num)
    {
        if (num == 0)
            return 0;
        int res = 0;
        while (num > 0)
        {
            num = num % 2 == 0 ? num / 2 : num - 1;
            res++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.numberOfSteps(151) << endl;
    return 0;
}