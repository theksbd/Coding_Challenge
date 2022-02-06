// success
// https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
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

string kangaroo(int x1, int v1, int x2, int v2)
{
    // kangaroo 1: x = x1 + v1 * t
    // kangaroo 2: x = x2 + v2 * t
    // they will meet each other when: x1 + v1 * t = x2 + v2 * t
    // t = (x2 - x1) / (v1 - v2)
    double t = double(x2 - x1) / double(v1 - v2);
    if (t < 0)
        return "NO";
    return t - int(t) == 0 ? "YES" : "NO";
}

int main()
{
    cout << kangaroo(0, 2, 5, 3) << endl;
    return 0;
}