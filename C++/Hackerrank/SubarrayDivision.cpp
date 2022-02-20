// success
// https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true
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

int birthday(vector<int> s, int d, int m)
{
    if (s.size() < m)
        return 0;
    int res = 0;
    int sum = 0;
    int i;
    for (i = 0; i < m; i++)
        sum += s[i];
    if (sum == d)
        res++;
    while (i < s.size())
    {
        sum -= s[i - m];
        sum += s[i];
        if (sum == d)
            res++;
        i++;
    }
    return res;
}

int main()
{
    cout << birthday({2, 2, 1, 3, 2}, 4, 2) << endl;
    return 0;
}