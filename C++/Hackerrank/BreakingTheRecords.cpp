// success
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true
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

vector<int> breakingRecords(vector<int> scores)
{
    vector<int> res(2, 0);
    int minVal = scores[0], maxVal = scores[0];
    for (int x : scores)
    {
        if (maxVal < x)
        {
            maxVal = x;
            res[0]++;
        }
        if (minVal > x)
        {
            minVal = x;
            res[1]++;
        }
    }
    return res;
}

int main()
{
    vector<int> v = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    v = breakingRecords(v);
    cout << v[0] << ' ' << v[1] << '\n';
    return 0;
}