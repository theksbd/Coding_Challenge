// success
// https://www.hackerrank.com/challenges/chocolate-feast/problem?isFullScreen=true
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

int chocolateFeast(int n, int c, int m)
{
    if (n < c)
        return 0;
    int res = 0;
    n = n / c; // n will be the number of bars Bobby can get
    res += n;
    if (n < m)
        return res;
    while (true)
    {
        int num_bar = n / m;
        res += num_bar;
        n -= num_bar * m;
        n += num_bar;
        if (n == 0 || num_bar == 0)
            break;
    }
    return res;
}

int main()
{
    vector<vector<int>> v = {{15, 1, 3}, {12, 4, 4}, {3, 2, 3}};
    for (vector<int> v_ : v)
        cout << chocolateFeast(v_[0], v_[1], v_[2]) << endl;
    return 0;
}