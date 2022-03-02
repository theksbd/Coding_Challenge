// success
// https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true
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

int utopianTree(int n)
{
    int res = 0;
    int n_ = n % 2 != 0 ? n + 1 : n;
    int i = n_ / 2;
    res += pow(2, i);
    while (i > 1)
    {
        res += pow(2, i - 1);
        i--;
    }
    if (n % 2 == 0 && n != 0)
        res++;
    return res;
}

int main()
{
    cout << utopianTree(4) << endl;
    return 0;
}