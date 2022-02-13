// success
// https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true
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

int getTotalX(vector<int> a, vector<int> b)
{
    int maxA = INT_MIN;
    for (int x : a)
    {
        if (maxA < x)
            maxA = x;
    }
    int minB = INT_MAX;
    for (int x : b)
    {
        if (minB > x)
            minB = x;
    }
    vector<int> c;
    for (int x = maxA; x <= minB; x += maxA)
    {
        bool isMultiple = true;
        for (int i : a)
        {
            if (x % i != 0)
            {
                isMultiple = false;
                break;
            }
        }
        if (isMultiple)
            c.push_back(x);
    }
    int res = 0;
    for (int i : c)
    {
        bool isMultiple = true;
        for (int x : b)
        {
            if (x % i != 0)
            {
                isMultiple = false;
                break;
            }
        }
        if (isMultiple)
            res++;
    }
    return res;
}

int main()
{
    vector<int> a = {2, 4};
    vector<int> b = {16, 32, 96};
    cout << getTotalX(a, b) << endl;
    return 0;
}