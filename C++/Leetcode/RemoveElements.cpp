// success
// https://leetcode.com/problems/remove-element/
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
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.empty())
            return 0;
        int size = nums.size();
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            if (*it == val)
            {
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution s;
    vector<int> v = {3, 2, 2, 3};
    cout << s.removeElement(v, 3) << endl;
    return 0;
    return 0;
}