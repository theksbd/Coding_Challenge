// success
// https://leetcode.com/problems/two-out-of-three/
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

class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        vector<int> res;
        set<int> exist1;
        set<int> exist2;
        set<int> exist3;
        for (int x : nums1)
            exist1.insert(x);
        for (int x : nums2)
            exist2.insert(x);
        for (int x : nums3)
            exist3.insert(x);
        for (int i = 1; i <= 100; i++)
        {
            int count = 0;
            if (exist1.find(i) != exist1.end())
                count++;
            if (exist2.find(i) != exist2.end())
                count++;
            if (exist3.find(i) != exist3.end())
                count++;
            if (count >= 2)
                res.push_back(i);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v1 = {1, 1, 3, 2};
    vector<int> v2 = {3, 2};
    vector<int> v3 = {3};
    vector<int> res = s.twoOutOfThree(v1, v2, v3);
    for (int x : res)
        cout << x << ' ';
    return 0;
}