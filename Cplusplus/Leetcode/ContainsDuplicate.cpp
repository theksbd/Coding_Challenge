// success
// https://leetcode.com/problems/contains-duplicate/
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
    // Solution v1.0: Time Complexity: O(nlogn) ~ 80ms - Memory: 46.6mb
    // bool containsDuplicate(vector<int> &nums)
    // {
    //     sort(nums.begin(), nums.end());
    //     int size = nums.size();
    //     for (int i = 0; i < size - 1; i++)
    //     {
    //         if (nums[i] == nums[i + 1])
    //             return true;
    //     }
    //     return false;
    // }

    // Solution v2.0: Time Complexity: O(n) ~ 104ms - Memory: 52.1mb
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> countMap;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (countMap[nums[i]])
                return true;
            countMap[nums[i]]++;
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 2, 3, 4};
    cout << s.containsDuplicate(v) << endl;
    return 0;
}