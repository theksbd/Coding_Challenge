// https://leetcode.com/problems/valid-anagram/
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
    bool isAnagram(string s, string t)
    {
        if (s == t)
            return true;
        if (s.size() != t.size())
            return false;
        vector<int> charFrequenceOfS(26, 0);
        vector<int> charFrequenceOfT(26, 0);
        for (char c : s)
        {
            int index = c - 'a';
            charFrequenceOfS[index]++;
        }
        for (char c : t)
        {
            int index = c - 'a';
            charFrequenceOfT[index]++;
        }
        for (int i = 0; i < 26; i++)
        {
            int frequenceS = charFrequenceOfS[i];
            int frequenceT = charFrequenceOfT[i];
            if (frequenceS != frequenceT)
                return false;
        }
        return true;
    }
};

int main()
{
    // Solution v1.0 - Time complexity: O() ~ ms - Memory: mb
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    cout << s.isAnagram("anagram", "ngraman") << endl;
    return 0;
}