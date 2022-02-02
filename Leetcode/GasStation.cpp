// success
// https://leetcode.com/problems/gas-station/
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
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int remaining = 0;       // current remaining fuel at current gas station
        int total_remaining = 0; // total remaining fuel from the first gas station to the previous one of current gas station
        int candidate = 0;
        int size = gas.size();
        for (int i = 0; i < size; i++)
        {
            remaining += gas[i] - cost[i];
            if (remaining < 0)
            {
                candidate = i + 1;
                total_remaining += remaining;
                remaining = 0;
            }
        }
        if (candidate == size || remaining + total_remaining < 0)
            return -1;
        return candidate;
    }
};

int main()
{
    Solution s;
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    cout << s.canCompleteCircuit(gas, cost) << endl;
    return 0;
}