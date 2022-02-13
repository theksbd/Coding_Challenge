// success
// https://leetcode.com/problems/running-sum-of-1d-array/
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
    vector<int> runningSum(vector<int> &nums)
    {
        int size = nums.size();
        for (int i = 1; i < size; i++)
            nums[i] += nums[i - 1];
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> v = {3, 1, 2, 10, 1};
    v = s.runningSum(v);
    for (int x : v)
        cout << x << " ";
    return 0;
}