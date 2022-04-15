// success
// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?isFullScreen=true
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

int jumpingOnClouds(vector<int> c)
{
    if (c.size() <= 2)
        return 1;
    int res = 0;
    size_t size = c.size();
    size_t i = c[0] == 0 ? 0 : 1;
    while (i < size)
    {
        if (c[i + 2] == 0)
            i += 2;
        else
            i++;
        if (i >= size - 2)
        {
            res += (i == size - 1) ? 1 : 2;
            break;
        }
        res++;
    }
    return res;
}

int random_int(int a, int b)
{
    return a + rand() % (b - a + 1);
}

int main()
{
    cout << jumpingOnClouds({0, 0}) << endl;
    return 0;
}