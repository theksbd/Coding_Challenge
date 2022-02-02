// success
// https://leetcode.com/problems/reverse-string/
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
    void reverseString(vector<char> &s)
    {
        int size = s.size();
        for (int i = 0; i < size / 2; i++)
            swap(s[i], s[size - i - 1]);
    }
};

int main()
{
    Solution s;
    vector<char> v = {'h', 'e', 'l', 'l', 'o'};
    s.reverseString(v);
    for (char c : v)
        cout << c;
    return 0;
}