// success
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
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
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int size = candies.size();
        vector<bool> res(size, false);
        int maxVal = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (maxVal < candies[i])
                maxVal = candies[i];
            candies[i] += extraCandies;
        }
        for (int i = 0; i < size; i++)
        {
            if (candies[i] >= maxVal)
                res[i] = true;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 3, 5, 1, 3};
    vector<bool> res = s.kidsWithCandies(v, 3);
    for (bool t : res)
        cout << t << " ";
    return 0;
}