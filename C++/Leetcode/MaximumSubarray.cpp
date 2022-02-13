// success
// https://leetcode.com/problems/maximum-subarray/
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
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int size = nums.size();
        int maxSum = nums[0];
        int currentSum = nums[0];
        for (int i = 1; i < size; i++)
        {
            currentSum = max(currentSum + nums[i], nums[i]);
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
    }
};

int main()
{
    Solution s;
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << s.maxSubArray(v) << endl;
    return 0;
}