// success
// https://leetcode.com/problems/day-of-the-week/
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

using namespace std;

class Solution
{
public:
    string dayOfTheWeek(int day, int month, int year)
    {
        // formula to calculate day from date: https://www.tutorialspoint.com/day-of-the-week-in-cplusplus
        if (month <= 2)
        {
            year--;
            month += 12;
        }
        int day_of_week = day + (int)(2.6 * (double)(month + 1)) + year % 100 + (year % 100) / 4 + (year / 100) / 4 + 5 * (year / 100);
        day_of_week %= 7;

        switch (day_of_week)
        {
        case 1:
            return "Sunday";
        case 2:
            return "Monday";
        case 3:
            return "Tuesday";
        case 4:
            return "Wednesday";
        case 5:
            return "Thursday";
        case 6:
            return "Friday";
        }
        return "Saturday";
    }
};

int main()
{
    Solution s;
    cout << s.dayOfTheWeek(17, 4, 2008) << endl;
    return 0;
}