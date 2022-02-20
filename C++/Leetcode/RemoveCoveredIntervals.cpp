// success
// https://leetcode.com/problems/remove-covered-intervals/
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
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {
        if (intervals.size() == 1)
            return 1;
        for (int i = 0; i < intervals.size(); i++)
        {
            vector<int> v1 = intervals[i];
            for (int j = 0; j < intervals.size(); j++)
            {
                if (j == i)
                    continue;
                if (intervals[j][0] >= v1[0] && intervals[j][1] <= v1[1])
                {
                    intervals.erase(intervals.begin() + j);
                    if (j < i)
                        i--;
                    j--;
                }
            }
        }
        return intervals.size();
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{1, 4}, {3, 6}, {2, 8}};
    cout << s.removeCoveredIntervals(v) << endl;
    return 0;
}