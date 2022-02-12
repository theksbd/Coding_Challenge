// success
// https://leetcode.com/problems/decompress-run-length-encoded-list/
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
#include <climits>

using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> res;
        int size = nums.size();
        for (int i = 0; i < size / 2; i++)
        {
            int freq = nums[2 * i];
            int val = nums[2 * i + 1];
            int j = 0;
            while (j++ < freq)
                res.push_back(val);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 2, 3, 4};
    v = s.decompressRLElist(v);
    for (int x : v)
        cout << x << ' ';
    return 0;
}