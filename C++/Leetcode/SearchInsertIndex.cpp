// success
// https://leetcode.com/problems/search-insert-position/
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
    int searchInsert(vector<int> &nums, int target)
    {
        int size = nums.size();
        int left = 0, right = size - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target)
                right = mid - 1;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                return mid;
        }
        return left;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 3, 5, 6};
    cout << s.searchInsert(v, 2) << endl;
    return 0;
}