// success
// https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true
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

bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

string dayOfProgrammer(int year)
{
    string res;
    int day = 256 - 31 * 5 - 30 * 2; // 5 months with 31 days and 2 months with 30 days, February will be calculated later
    if (year == 1918)
        day -= 15;
    else if (year > 1918) // Gregorian calendar
    {
        if (isLeapYear(year))
            day -= 29;
        else
            day -= 28;
    }
    else // Julian calendar
    {
        if (year % 4 == 0)
            day -= 29;
        else
            day -= 28;
    }
    res += to_string(day) + ".09." + to_string(year);
    return res;
}

int main()
{
    cout << dayOfProgrammer(1918) << endl;
    cout << dayOfProgrammer(1984) << endl;
    cout << dayOfProgrammer(2022) << endl;
    cout << dayOfProgrammer(1865) << endl;
    return 0;
}