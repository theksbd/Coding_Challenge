// success
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
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

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
    }
};

int main()
{
    Solution s;
    vector<int> v = {3, 1, 2, 1};
    cout << s.maxProduct(v) << endl;
    return 0;
}