// success
// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
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
    int mostWordsFound(vector<string> &sentences)
    {
        int maxWord = 0;
        for (string str : sentences)
        {
            int count = 0;
            for (char c : str)
            {
                if (c == ' ')
                    count++;
            }
            if (maxWord < count + 1)
                maxWord = count + 1;
        }
        return maxWord;
    }
};

int main()
{
    Solution s;
    vector<string> v = {"alice and bob love leetcode",
                        "i think so too",
                        "this is great thanks very much"};
    cout << s.mostWordsFound(v) << endl;
    return 0;
}