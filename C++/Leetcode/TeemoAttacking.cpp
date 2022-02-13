// success
// https://leetcode.com/problems/teemo-attacking/
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
    // v1.0 - Time: 36ms - Memory: 25.8mb
    // int findPoisonedDuration(vector<int> &timeSeries, int duration)
    // {
    //     if (timeSeries.size() == 1)
    //         return duration;
    //     int res = 0;
    //     int size = timeSeries.size();
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (i == size - 1)
    //             res += duration;
    //         else
    //         {
    //             if (duration > timeSeries[i + 1] - timeSeries[i])
    //                 res += timeSeries[i + 1] - timeSeries[i];
    //             else
    //                 res += duration;
    //         }
    //     }
    //     return res;
    // }

    //v2.0 - Time: 54ms - Memory: 25.9mb
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        if (timeSeries.size() == 1)
            return duration;
        int res = 0;
        int size = timeSeries.size();
        for (int i = 0; i < size - 1; i++)
        {
            res += min(timeSeries[i + 1] - timeSeries[i], duration);
        }
        res += duration;
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 5};
    cout << s.findPoisonedDuration(v, 4) << endl;
    return 0;
}