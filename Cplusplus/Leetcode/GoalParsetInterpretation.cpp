// success
// https://leetcode.com/problems/goal-parser-interpretation/
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
    string interpret(string command)
    {
        string res;
        int size = command.size();
        int i = 0;
        while (i < size)
        {
            if (command[i] == '(')
            {
                if (command[i + 1] == ')')
                {
                    res += 'o';
                    i += 2;
                }
                else
                {
                    res += "al";
                    i += 4;
                }
            }
            else
            {
                res += 'G';
                i++;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.interpret("(al)G(al)()()G") << endl;
    return 0;
}