// success
// https://leetcode.com/problems/single-number/
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
    int singleNumber(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int size = nums.size();
        if (nums[size - 1] != nums[size - 2])
            return nums[size - 1];
        for (int i = 0; i < size; i += 2)
        {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }
        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> v = {4, 1, 2, 1, 2};
    cout << s.singleNumber(v) << endl;
    return 0;
}