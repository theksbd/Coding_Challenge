// success
// https://leetcode.com/problems/build-array-from-permutation/
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
    vector<int> buildArray(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums;
        vector<int> res;
        for (int x : nums)
            res.push_back(nums[x]);
        return res;
    }
};

int main()
{
    Solution s;
    // vector<int> v = {5, 0, 1, 2, 3, 4};
    vector<int> v = {0, 2, 1, 5, 3, 4};
    v = s.buildArray(v);
    for (int x : v)
        cout << x << " ";
    return 0;
}