// success
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            if (numbers[left] + numbers[right] > target)
                right--;
            else if (numbers[left] + numbers[right] < target)
                left++;
            else
                return {left + 1, right + 1};
        }
        return {-1, -1};
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = s.twoSum(v, target);
    cout << "[" << res.front() << ", " << res.back() << "]" << endl;
    return 0;
}