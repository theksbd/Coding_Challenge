// success
// https://leetcode.com/problems/find-target-indices-after-sorting-array/
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
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (right - left) / 2 + left;
            if (nums[mid] > target)
                right = mid - 1;
            else if (nums[mid] < target)
                left = mid + 1;
            else
            {
                if (left == right)
                {
                    res.push_back(mid);
                    break;
                }
                if (mid == left)
                {
                    res.push_back(mid);
                    if (nums[mid + 1] == target)
                        res.push_back(mid + 1);
                    break;
                }
                if (nums[mid - 1] == nums[mid])
                {
                    int i = mid - 1;
                    while (i >= left)
                    {
                        if (nums[i] == target)
                            res.insert(res.begin(), i);
                        else
                            break;
                        i--;
                    }
                }
                res.push_back(mid);
                if (nums[mid + 1] == nums[mid])
                {
                    int i = mid + 1;
                    while (i <= right)
                    {
                        if (nums[i] == target)
                            res.push_back(i);
                        else
                            break;
                        i++;
                    }
                }
                break;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {16, 25, 90, 1, 99, 100, 47, 9, 71, 24, 24, 18, 38, 81, 60, 19, 38, 6, 16, 66, 51, 100, 49};
    // vector<int> v = {0, 1, 3, 7, 7, 8, 7};
    vector<int> res = s.targetIndices(v, 16);
    if (res.empty())
        cout << "Empty\n";
    else
    {
        for (int x : res)
            cout << x << " ";
    }
    return 0;
}