// success
// https://leetcode.com/problems/summary-ranges/
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
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> res;
        if (nums.size() == 0)
            return res;
        if (nums.size() == 1)
            return {to_string(nums[0])};
        string range;
        string arrow = "->";
        int start = nums[0], end = 0;
        int size = nums.size();
        for (int i = 1; i < size; i++)
        {
            end = nums[i - 1];
            if (nums[i] != nums[i - 1] + 1)
            {
                if (start == end)
                    range = to_string(end);
                else
                    range = to_string(start) + arrow + to_string(end);
                res.push_back(range);
                start = nums[i];
            }
        }
        // after the for loop above,
        // we still have the leftover, which is the last element in the vector nums, has not been converted into summary ranges yet
        // so we will convert it now
        // but we will have two cases:
        // 1. this element is in long-size range: "a->b" if a != b
        // 2. this element is in one-size range: "a" if a == b
        end = nums[size - 1];
        if (nums[size - 1] == nums[size - 2] + 1)
            range = to_string(start) + arrow + to_string(end);
        else
            range = to_string(end);
        res.push_back(range);
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {0, 1, 2, 3, 7, 8, 9, 15, 16, 17};
    for (string s : s.summaryRanges(v))
        cout << "\"" << s << "\" ";
    return 0;
}