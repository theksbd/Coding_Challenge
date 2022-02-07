// success
// https://leetcode.com/problems/jewels-and-stones/
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
    int numJewelsInStones(string jewels, string stones)
    {
        int res = 0;
        set<char> exist;
        for (char c : jewels)
            exist.insert(c);
        for (char c : stones)
        {
            if (exist.find(c) != exist.end())
                res++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.numJewelsInStones("aA", "aAAbbb") << endl;
    return 0;
}