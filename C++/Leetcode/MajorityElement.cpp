// success
// https://leetcode.com/problems/majority-element/submissions/
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
    int majorityElement(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        map<int, int> freq;
        int count = nums.size() / 2;
        for (int x : nums)
        {
            freq[x]++;
            if (freq[x] > count)
                return x;
        }
        return nums[0]; // this will never happen
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    cout << s.majorityElement(v) << endl;
    return 0;
}