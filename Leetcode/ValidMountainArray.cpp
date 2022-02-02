// success
// https://leetcode.com/problems/valid-mountain-array/
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
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() <= 2)
            return false;
        if (arr[1] < arr[0])
            return false;
        bool isIncreasing = true;
        int size = arr.size();
        for (int i = 1; i < size; i++)
        {
            if (arr[i] == arr[i - 1])
                return false;
            if (isIncreasing)
            {
                if (arr[i] < arr[i - 1])
                    isIncreasing = false;
            }
            else
            {
                if (arr[i] > arr[i - 1])
                    return false;
            }
        }
        if (isIncreasing)
            return false;
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> v = {0, 3, 2, 1};
    cout << s.validMountainArray(v) << endl;
    return 0;
}