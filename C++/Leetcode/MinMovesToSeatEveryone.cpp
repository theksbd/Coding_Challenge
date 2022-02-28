// success
// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
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

class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        int res = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); i++)
        {
            int move = seats[i] - students[i];
            res += move >= 0 ? move : move * -1;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> seats = {3, 1, 5};
    vector<int> students = {2, 7, 4};
    cout << s.minMovesToSeat(seats, students) << endl;
    return 0;
}