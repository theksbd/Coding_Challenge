// success
// https://leetcode.com/problems/kth-largest-element-in-a-stream/
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

class KthLargest
{
public:
    int k;
    vector<int> nums;

    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        this->nums = nums;
        sort(this->nums.begin(), this->nums.end());
    }

    int findInsertIndex(vector<int> &nums, int val)
    {
        // this helper method will help us find the appropriate index to be inserted using binary search
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == val)
                return mid;
            if (nums[mid] < val)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }

    int add(int val)
    {
        int index = findInsertIndex(this->nums, val);
        this->nums.insert(nums.begin() + index, val);
        return this->nums[nums.size() - k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main()
{
    int k = 3;
    vector<int> nums = {4, 5, 8, 2};
    KthLargest *obj = new KthLargest(k, nums);
    vector<int> val = {3, 5, 10, 9, 4};
    for (int x : val)
    {
        int param_1 = obj->add(x);
        cout << param_1 << " ";
    }
    return 0;
}