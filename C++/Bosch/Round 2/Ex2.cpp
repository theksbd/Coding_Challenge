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

int countNumberOfValue(int value)
{
    int res = 0;
    while (value > 0)
    {
        value /= 10;
        res++;
    }
    return res;
}

int solution(string &S)
{
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    int size_S = S.size();
    int value = stoi(S);
    int size_value = countNumberOfValue(value);
    bool leadingZero = false;
    if (size_S != size_value)
        leadingZero = true;
    if (leadingZero)
    {
        int numberOfLeadingZero = size_S - size_value;
        res += numberOfLeadingZero * 3;
        while (value > 0)
        {
            int digit = value % 10;
            if (digit < 3)
                res += 3;
            else if (digit == 3)
            {
                if (value > 0)
                    res += 4;
            }
            else if (digit < 6)
                res += 2;
            else if (digit == 6)
            {
                if (value > 0)
                    res += 4;
            }
            else if (digit < 9)
                res += 1;
            else if (digit == 9)
            {
                if (value > 0)
                    res += 4;
            }
            value /= 10;
        }
    }
    else
    {
        while (value > 0)
        {
            int digit = value % 10;
            if (digit < 3)
                res += 3;
            else if (digit == 3)
            {
                if (value > 0)
                    res += 4;
            }
            else if (digit < 6)
                res += 2;
            else if (digit == 6)
            {
                if (value > 0)
                    res += 4;
            }
            else if (digit < 9)
                res += 1;
            else if (digit == 9)
            {
                if (value > 0)
                    res += 4;
            }
            value /= 10;
        }
    }
    return res;
}

int main()
{
    string S = "0081";
    cout << solution(S) << endl;
    return 0;
}