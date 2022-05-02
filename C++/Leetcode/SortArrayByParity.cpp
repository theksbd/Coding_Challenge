// success
// https://leetcode.com/problems/sort-array-by-parity/
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
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        if (nums.size() <= 1)
            return nums;
        int size = nums.size();
        vector<int> res(size, 0);
        int index_even = 0, index_odd = size - 1;
        for (int x : nums)
        {
            if (x & 1) // x is odd number
                res[index_odd--] = x;
            else
                res[index_even++] = x;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 3, 1, 2};
    for (int x : s.sortArrayByParity(nums))
        cout << x << ' ';
    return 0;
}