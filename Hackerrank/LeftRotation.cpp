// success
// https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
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

vector<int> rotLeft(vector<int> a, int d)
{
    int size = a.size();
    d %= size;
    if (d == 0)
        return a;
    reverse(a.begin(), a.begin() + d);
    reverse(a.begin() + d, a.end());
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v = rotLeft(v, 4);
    for (int x : v)
        cout << x << ' ';
    return 0;
}