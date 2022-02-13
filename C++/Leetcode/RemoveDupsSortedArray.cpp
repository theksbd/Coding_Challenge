// success
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
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
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int res = 0;
        stack<int> st;
        while (nums.empty() == false)
        {
            if (st.empty())
            {
                st.push(nums.back());
            }
            else
            {
                int val = nums.back();
                if (st.top() != val)
                    st.push(val);
            }
            nums.pop_back();
        }
        while (st.empty() == false)
        {
            nums.push_back(st.top());
            st.pop();
        }
        res = nums.size();
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {0, 0, 0, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4};
    cout << s.removeDuplicates(v) << endl;
    return 0;
}