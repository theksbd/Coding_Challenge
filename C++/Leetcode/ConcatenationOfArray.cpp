// success
// https://leetcode.com/problems/concatenation-of-array/
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
    vector<int> getConcatenation(vector<int> &nums)
    {
        int size = nums.size();
        nums.resize(2 * size);
        for (int i = size; i < 2 * size; i++)
            nums[i] = nums[i - size];
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 3, 2, 1};
    v = s.getConcatenation(v);
    for (int x : v)
        cout << x << " ";
    return 0;
}