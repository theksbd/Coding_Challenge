// success
// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int res = 0;
        map<int, int> exist;
        for (int x : nums)
        {
            if (exist[k + x] != 0)
                res += exist[k + x];
            if (exist[-k + x] != 0)
                res += exist[-k + x];
            exist[x]++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {3, 2, 1, 5, 4};
    // vector<int> v = {1, 2, 2, 1};
    cout << s.countKDifference(v, 2) << endl;
    return 0;
}