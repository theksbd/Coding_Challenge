// success
// https://leetcode.com/problems/sorting-the-sentence/
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
    string sortSentence(string s)
    {
        string res;
        map<int, string> mp;
        int size = s.size();
        int start = 0;
        for (int i = 0; i <= size; i++)
        {
            if (s[i] == ' ' || s[i] == '\0')
            {
                string word = s.substr(start, i - start - 1);
                int index = s[i - 1] - '0';
                start = i + 1;
                mp.insert(pair<int, string>(index, word));
            }
        }
        int size_mp = mp.size();
        for (int i = 1; i <= size_mp; i++)
        {
            res += mp[i];
            if (i < size_mp)
                res += " ";
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.sortSentence("Myself2 Me1 I4 and3") << ';' << endl;
    return 0;
}