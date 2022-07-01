// success
// https://leetcode.com/problems/maximum-units-on-a-truck/
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    static bool compare(vector<int> a, vector<int> b)
    {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        if (boxTypes.size() == 1)
            return boxTypes[0][1];
        int res = 0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int i = 0;
        int size = boxTypes.size();
        while (truckSize > 0 && i < size)
        {
            vector<int> box = boxTypes[i++];
            int quantity = min(box[0], truckSize);
            res += box[1] * quantity;
            truckSize -= quantity;
        }
        return res;
    }
};

int main()
{
    // Solution v1.0 - Time complexity: O() ~ ms - Memory: mb
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    vector<vector<int>> boxTypes = {{5, 10}, {2, 5}, {4, 7}, {3, 9}};
    int truckSize = 10;
    cout << s.maximumUnits(boxTypes, truckSize) << endl;
    return 0;
}