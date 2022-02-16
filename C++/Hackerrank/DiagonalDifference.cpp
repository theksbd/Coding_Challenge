// success
// https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true
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

int diagonalDifference(vector<vector<int>> arr)
{
    int size = arr.size();
    int d1 = 0, d2 = 0;
    for (int i = 0; i < size; i++)
    {
        d1 += arr[i][i];
        d2 += arr[i][size - 1 - i];
    }
    d1 -= d2;
    return d1 < 0 ? d1 * -1 : d1;
}

int main()
{
    vector<vector<int>> v = {{11, 2, 3}, {5, 3, 9}, {4, 0, 0}};
    cout << diagonalDifference(v) << endl;
    return 0;
}