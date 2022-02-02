// success
// https://leetcode.com/problems/height-checker/
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
    int heightChecker(vector<int> &heights)
    {
        int res = 0;
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int size = heights.size();
        for (int i = 0; i < size; i++)
        {
            if (heights[i] != expected[i])
                res++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 1, 4, 2, 1, 3};
    cout << s.heightChecker(v) << endl;
    return 0;
}