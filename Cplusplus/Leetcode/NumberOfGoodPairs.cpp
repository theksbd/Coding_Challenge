// success
// https://leetcode.com/problems/number-of-good-pairs/
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
    int numIdenticalPairs(vector<int> &nums)
    {
        int res = 0;
        vector<int> freq(101, 0);
        for (int x : nums)
        {
            if (freq[x] != 0)
                res += freq[x];
            freq[x]++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v1 = {1, 2, 3, 1, 1, 3};
    vector<int> v2 = {1, 1, 1, 1};
    cout << s.numIdenticalPairs(v1) << endl;
    cout << s.numIdenticalPairs(v2) << endl;
    return 0;
}