// success
// https://www.hackerrank.com/challenges/icecream-parlor/problem?isFullScreen=true
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

vector<int> icecreamParlor(int m, vector<int> arr)
{
    map<int, int> mp;
    int res1 = -1, res2 = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int diff = m - arr[i];
        if (mp[diff] != 0)
        {
            res1 = mp[diff];
            res2 = i + 1;
            break;
        }
        mp[arr[i]] = i + 1;
    }
    return {res1, res2};
}

int main()
{
    for (int x : icecreamParlor(4, {1, 4, 5, 3, 2}))
        cout << x << ' ';
    return 0;
}