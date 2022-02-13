// success
// https://leetcode.com/problems/create-target-array-in-the-given-order/
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
#include <climits>

using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> res;
        int size = nums.size();
        for (int i = 0; i < size; i++)
            res.insert(res.begin() + index[i], nums[i]);
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};
    nums = s.createTargetArray(nums, index);
    for (int x : nums)
        cout << x << ' ';
    return 0;
}