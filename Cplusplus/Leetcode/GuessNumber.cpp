// success
// https://leetcode.com/problems/guess-number-higher-or-lower/
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

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if your guess is higher than the number I picked (i.e. num > pick)
 *			      1 if your guess is lower than the number I picked (i.e. num < pick)
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num, int pick = 6)
{
    if (num < pick)
        return 1;
    if (num > pick)
        return -1;
    return 0;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1, right = n;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int g = guess(mid);
            if (g == 0)
                return mid;
            if (g == 1)
                left = mid + 1;
            else
                right = mid - 1;             
        }
        return 0;
    }
};

int main()
{
    Solution s;
    cout << s.guessNumber(10) << endl;
    return 0;
}