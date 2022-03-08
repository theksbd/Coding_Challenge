// success
// https://www.hackerrank.com/challenges/service-lane/problem?isFullScreen=true
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

vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width)
{
    vector<int> res;
    for (vector<int> v : cases)
    {
        int start = v[0], end = v[1];
        int minVal = width[start];
        for (int i = start + 1; i <= end; i++)
            minVal = minVal > width[i] ? width[i] : minVal;
        res.push_back(minVal);
    }
    return res;
}

int main()
{
    vector<int> width = {2, 3, 1, 2, 3, 2, 3, 3};
    vector<vector<int>> cases = {{0, 3}, {4, 6}, {6, 7}, {3, 5}, {0, 7}};
    vector<int> res = serviceLane(8, cases, width);
    for (int x : res)
        cout << x << ' ';
    return 0;
}