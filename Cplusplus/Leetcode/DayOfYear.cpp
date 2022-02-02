// success
// https://leetcode.com/problems/day-of-the-year/
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

class Solution
{
public:
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

    int dayOfYear(string date)
    {
        int res = 0;

        int day = stoi(date.substr(8));
        int month = stoi(date.substr(5, 2));
        if (month == 1)
            return day;
        int year = stoi(date.substr(0, 4));

        bool check_year = isLeapYear(year);
        int prev_month = month - 1;                                                   // get previous month of current month
        int countOddMonth = (prev_month - 1) / 2 + 1;                                 // count how many odd months (e.g Jan, March, etc..)
        int countEvenMonth = prev_month % 2 == 0 ? countOddMonth : countOddMonth - 1; // count how many even months (e.g Feb, April, etc..)
        if (month <= 7)
        {
            res += countOddMonth * 31;
            if (countEvenMonth > 0)
            {
                if (check_year) // if given year is a leap year
                    res += countEvenMonth * 30 - 1;
                else
                    res += countEvenMonth * 30 - 2;
            }
        }
        else
        {
            res += 4 * 31; // 4 odd months (Jan, March, May, July)
            if (countOddMonth > 4)
                res += (countOddMonth - 4) * 30;
            if (check_year) // 3 even months (Feb, April, June)
                res += 3 * 30 - 1;
            else
                res += 3 * 30 - 2;
            if (countEvenMonth > 3)
                res += (countEvenMonth - 3) * 31;
        }
        res += day;
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.dayOfYear("2001-09-19") << endl;
    return 0;
}