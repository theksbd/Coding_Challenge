// success
// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
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
    int numPairsDivisibleBy60(vector<int> &time)
    {
        if (time.size() == 1)
            return 0;
        int res = 0;
        vector<int> remain(60); // container stores how many remainders of all numbers modulo for 60
        for (int t : time)
            remain[t % 60]++;
        for (int i = 1; i <= 29; i++)
            res += remain[i] * remain[60 - i];
        res += ((remain[0] - 1) * remain[0]) / 2 + ((remain[30] - 1) * remain[30]) / 2;
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {60, 60, 60};
    cout << s.numPairsDivisibleBy60(v) << endl;
    return 0;
}