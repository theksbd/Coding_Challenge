// success
// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
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

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int res = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int r = ar[i] % k;
        if (r == 0)
        {
            if (mp.find(r) != mp.end())
            {
                res += mp[r];
                mp[r]++;
                continue;
            }
            mp.insert(pair<int, int>(r, 1));
            continue;
        }
        int diff = k - r;
        if (mp.find(diff) != mp.end())
        {
            res += mp[diff];
        }
        if (mp.find(r) != mp.end())
        {
            mp[r]++;
            continue;
        }
        mp.insert(pair<int, int>(r, 1));
    }
    return res;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    cout << divisibleSumPairs(6, 5, v1) << endl;
    vector<int> v2 = {1, 3, 2, 6, 1, 2};
    cout << divisibleSumPairs(6, 3, v2) << endl;
    return 0;
}