// success
// https://leetcode.com/problems/sum-of-unique-elements/
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
    int sumOfUnique(vector<int> &nums)
    {
        int res = 0;
        vector<int> exist(101, 0);
        for (int x : nums)
        {
            if (exist[x] == 0)
            {
                res += x;
                exist[x]++;
            }
            else
            {
                if (exist[x] == 1)
                    res -= x;
                exist[x]++;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 2, 3, 3, 5};
    cout << s.sumOfUnique(v) << endl;
    return 0;
}