// success
// https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=true
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

long repeatedString(string s, long n)
{
    long res = 0;
    long size = s.size();
    for (char c : s)
    {
        if (c == 'a')
            res++;
    }
    if (res == 0)
        return res;
    long num_repeat = n / size;
    res *= num_repeat;
    n -= num_repeat * size;
    for (long i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            res++;
    }
    return res;
}

int main()
{
    cout << repeatedString("abcac", 22) << endl;
    return 0;
}