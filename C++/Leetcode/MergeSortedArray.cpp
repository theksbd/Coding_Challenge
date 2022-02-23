// success
// https://leetcode.com/problems/merge-sorted-array/
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
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
            return;
        if (m == 0)
        {
            nums1 = nums2;
            return;
        }
        vector<int> temp_nums1 = nums1;
        int i = 0, j = 0;
        int idx = 0; // index of merged array nums1
        while (i < m && j < n)
        {
            if (temp_nums1[i] <= nums2[j])
            {
                nums1[idx] = temp_nums1[i];
                i++;
            }
            else
            {
                nums1[idx] = nums2[j];
                j++;
            }
            idx++;
        }
        while (i < m)
            nums1[idx++] = temp_nums1[i++];
        while (j < n)
            nums1[idx++] = nums2[j++];
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    s.merge(nums1, 3, nums2, 3);
    for (int x : nums1)
        cout << x << ' ';
    return 0;
}