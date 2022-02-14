// success
// https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true
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
#include <climits>

using namespace std;

int findDigits(int n)
{
    int res = 0;
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        temp /= 10;
        if (digit == 0)
            continue;
        if (n % digit == 0)
            res++;
    }
    return res;
}

int main()
{
    cout << findDigits(124) << endl;
    return 0;
}