// success
// https://leetcode.com/problems/arithmetic-slices/
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
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        if (nums.size() < 3)
            return 0;
        int res = 0;
        int size = nums.size();
        int start = 0, end = 0;
        int diff = nums[1] - nums[0];
        for (int i = 2; i < size; i++)
        {
            end = i;
            if (nums[i] - nums[i - 1] != diff)
            {
                if (end - start >= 3)
                {
                    int n = end - start;
                    n = n - 2;
                    res += (1 + n) * n / 2;
                }
                start = end - 1;
                diff = nums[end] - nums[start];
            }
        }
        // after the loop, value of end will equal to size - 1
        // we must check if there is arithmetic subarray at the end of vector nums
        // for example, if nums = [7,7,7,7]:
        // after the for loop above, we 'll have start = 0, end = 3 and res = 0 (because diff didn't change during the loop)
        if (end - start + 1 >= 3)
        {
            int n = end - start + 1;
            n = n - 2;
            res += (1 + n) * n / 2;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 3, 5, 7, 9, 12, 13, 14, 15, 20, 25, 30, 31};
    cout << s.numberOfArithmeticSlices(v) << endl;
    return 0;
}