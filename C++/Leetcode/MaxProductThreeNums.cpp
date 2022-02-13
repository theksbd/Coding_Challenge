// success
// https://leetcode.com/problems/maximum-product-of-three-numbers/
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
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int max1 = nums[size - 1] * nums[size - 2] * nums[size - 3];
        int max2 = nums[0] * nums[1] * nums[size - 1];
        return max1 > max2 ? max1 : max2;
    }
};

int main()
{
    Solution s;
    vector<int> v = {3, 1, 2, 1};
    cout << s.maximumProduct(v) << endl;
    return 0;
}