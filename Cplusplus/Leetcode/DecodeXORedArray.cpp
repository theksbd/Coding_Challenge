// success
// https://leetcode.com/problems/decode-xored-array/
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
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> res;
        res.push_back(first);
        int size = encoded.size();
        for (int i = 0; i < size; i++)
            res.push_back(res[i] ^ encoded[i]);
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {6, 2, 7, 3};
    v = s.decode(v, 4);
    for (int x : v)
        cout << x << ' ';
    return 0;
}