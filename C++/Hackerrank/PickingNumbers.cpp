// success
// https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true
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

int pickingNumbers(vector<int> a)
{
    sort(a.begin(), a.end());
    int size = a.size();
    int i = 0, j = 0;
    int res = 0;
    while (i < size)
    {
        if (a[i + 1] - a[j] > 1)
        {
            if (i - j + 1 > res)
                res = i - j + 1;
            j = i + 1;
            i++;
            continue;
        }
        i++;
    }
    return res;
}

int main()
{
    vector<int> v = {4, 6, 5, 3, 3, 1};
    cout << pickingNumbers(v) << endl;
    return 0;
}