// success
// https://leetcode.com/problems/implement-strstr/
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
    int strStr(string haystack, string needle)
    {
        if (needle == "")
            return 0;
        if (haystack == "")
            return -1;
        int size_haystack = haystack.size();
        int size_needle = needle.size();
        if (size_needle > size_haystack)
            return -1;
        for (int i = 0; i <= size_haystack - size_needle; i++)
        {
            if (haystack[i] == needle[0])
            {
                int j = 1;
                while (j < size_needle)
                {
                    if (haystack[i + j] != needle[j])
                        break;
                    j++;
                }
                if (j == size_needle)
                    return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.strStr("Hello", "ll") << endl;
    return 0;
}