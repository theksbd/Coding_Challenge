// success
// https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true
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

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int apple = 0, orange = 0;
    for (int x : apples)
    {
        if (a + x >= s && a + x <= t)
            apple++;
    }
    for (int x : oranges)
    {
        if (b + x >= s && b + x <= t)
            orange++;
    }
    cout << apple << '\n' << orange;
}

int main()
{
    countApplesAndOranges(7, 10, 4, 12, {2, 3, -4}, {3, -2, -4});
    return 0;
}