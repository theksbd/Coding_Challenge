// success
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/
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
    int findNumbers(vector<int> &nums)
    {
        int res = 0;
        for (int x : nums)
        {
            if (x >= 10 && x <= 99)
                res++;
            else if (x >= 1000 && x <= 9999)
                res++;
            else if (x == 100000)
                res++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {12, 345, 2, 6, 7896};
    cout << s.findNumbers(v) << endl;
    return 0;
}