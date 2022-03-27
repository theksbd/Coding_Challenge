// success
// https://www.hackerrank.com/challenges/cut-the-sticks/problem?isFullScreen=true
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

vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> res;
    map<int, int> mp;
    int val = 0;
    for (int x : arr)
    {
        val++;
        mp[x]++;
    }
    while (!mp.empty())
    {
        res.push_back(val);
        val -= mp.begin()->second;
        mp.erase(mp.begin());
    }
    return res;
}

int main()
{
    for (int x : cutTheSticks({5, 4, 4, 2, 2, 8}))
        cout << x << ' ';
    return 0;
}