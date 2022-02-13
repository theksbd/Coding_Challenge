// success
// https://leetcode.com/problems/richest-customer-wealth/
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
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int res = 0;
        for (vector<int> v : accounts)
        {
            int sum = 0;
            for (int x : v)
                sum += x;
            res = res > sum ? res : sum;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{1, 5}, {7, 3}, {3, 5}};
    cout << s.maximumWealth(v) << endl;
    return 0;
}