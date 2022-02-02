// success
// https://leetcode.com/problems/goat-latin/
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
    bool isVowel(char c)
    {
        switch (c)
        {
        case 'u':
        case 'U':
        case 'e':
        case 'E':
        case 'o':
        case 'O':
        case 'a':
        case 'A':
        case 'i':
        case 'I':
            return true;
        }
        return false;
    }
    string toGoatLatin(string sentence)
    {
        string res;
        int size = sentence.size();
        int start = 0;
        int index = 1;
        for (int i = 0; i <= size; i++)
        {
            if (sentence[i] == ' ' || sentence[i] == '\0')
            {
                string word = sentence.substr(start, i - start);
                start = i + 1;
                if (isVowel(word[0]))
                    res += word;
                else
                {
                    res.append(word.begin() + 1, word.end());
                    res += word[0];
                }
                res += "ma";
                for (int j = 0; j < index; j++)
                    res += "a";
                index++;
                if (sentence[i] != '\0')
                    res += " ";
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.toGoatLatin("I speak Goat Latin") << endl;
    cout << s.toGoatLatin("The quick brown fox jumped over the lazy dog") << endl;
    return 0;
}