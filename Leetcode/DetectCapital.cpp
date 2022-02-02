// https://leetcode.com/problems/detect-capital/
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
    // Solution v1.0: Time Complexity: O(n) ~ 0ms - Memory: 6.1mb
    // bool detectCapitalUse(string word)
    // {
    //     bool leadingCap = word[0] >= 'A' && word[0] <= 'Z' ? true : false; // true if first character in word is capital
    //     bool fullCap = false;                                              // true if full word is capital
    //     int i = 1;
    //     while (word[i] != '\0')
    //     {
    //         if (leadingCap)
    //         {
    //             if (word[i] >= 'A' && word[i] <= 'Z')
    //             {
    //                 if (i == 1)
    //                     fullCap = true;
    //                 else
    //                 {
    //                     if (!fullCap)
    //                         return false;
    //                 }
    //             }
    //             else if (word[i] >= 'a' && word[i] <= 'z')
    //             {
    //                 if (fullCap)
    //                     return false;
    //             }
    //         }
    //         else
    //         {
    //             if (word[i] < 'a' || word[i] > 'z')
    //                 return false;
    //         }
    //         i++;
    //     }
    //     return true;
    // }

    // Solution v2.0: Time Complexity: O(n) ~ 0ms - Memory: 6.1mb
    bool detectCapitalUse(string word)
    {
        int countUpper = word[0] >= 'A' && word[0] <= 'Z' ? 1 : 0;
        int countLower = countUpper == 1 ? 0 : 1;
        int size = word.size();
        for (int i = 1; i < size; i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
                countUpper++;
            else if (word[i] >= 'a' && word[i] <= 'z')
                countLower++;
        }
        if (countUpper == size || countLower == size || (countUpper == 1 && (word[0] >= 'A' && word[0] <= 'Z')))
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.detectCapitalUse("leetcode") << endl;
    cout << s.detectCapitalUse("Leetcode") << endl;
    cout << s.detectCapitalUse("LEETCODE") << endl;
    cout << s.detectCapitalUse("LeeTcode") << endl;
    cout << s.detectCapitalUse("LeetcdE") << endl;
    cout << s.detectCapitalUse("leetCode") << endl;
    cout << s.detectCapitalUse("leetcodE") << endl;
    cout << s.detectCapitalUse("LEETCODe") << endl;
    cout << s.detectCapitalUse("lEETCODE") << endl;
    return 0;
}