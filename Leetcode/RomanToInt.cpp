// success
// https://leetcode.com/problems/roman-to-integer/
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

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> romanTranslator;
        romanTranslator.insert(pair<char, int>('I', 1));
        romanTranslator.insert(pair<char, int>('V', 5));
        romanTranslator.insert(pair<char, int>('X', 10));
        romanTranslator.insert(pair<char, int>('L', 50));
        romanTranslator.insert(pair<char, int>('C', 100));
        romanTranslator.insert(pair<char, int>('D', 500));
        romanTranslator.insert(pair<char, int>('M', 1000));

        int size = s.size();
        int res = 0;
        for (int i = 0; i < size; i++)
        {
            // res += romanTranslator.find(s[i])->second;
            // bool special = false;
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V')
                {
                    res += 4;
                    i++;
                    continue;
                }
                else if (s[i + 1] == 'X')
                {
                    res += 9;
                    i++;
                    continue;
                }
                // special = true;
            }
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    res += 40;
                    i++;
                    continue;
                }
                else if (s[i + 1] == 'C')
                {
                    res += 90;
                    i++;
                    continue;
                }
                // special = true;
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    res += 400;
                    i++;
                    continue;
                }
                else if (s[i + 1] == 'M')
                {
                    res += 900;
                    i++;
                    continue;
                }
                // special = true;
            }
            res += romanTranslator.find(s[i])->second;
        }
        return res;
    }
};

int main()
{
    Solution s;
    string str = "IV";
    cout << s.romanToInt(str) << endl;
    return 0;
}