// success
// https://leetcode.com/problems/permutation-in-string/
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
    // Solution v1.0: Time complexity: Time Limit Exceeded - Memory: Cant calculate
    // bool checkInclusion(string s1, string s2)
    // {
    //     int size_s1 = s1.size();
    //     int size_s2 = s2.size();
    //     map<char, int> freq1;
    //     for (char c : s1)
    //         freq1[c]++;
    //     for (int i = 0; i <= size_s2 - size_s1; i++)
    //     {
    //         if (freq1.find(s2[i]) != freq1.end())
    //         {
    //             map<char, int> temp = freq1;
    //             temp[s2[i]]--;
    //             if (temp[s2[i]] == 0)
    //                 temp.erase(s2[i]);
    //             int j = 1;
    //             while (j < size_s1)
    //             {
    //                 if (temp.find(s2[i + j]) == temp.end())
    //                     break;
    //                 temp[s2[i + j]]--;
    //                 if (temp[s2[i + j]] == 0)
    //                     temp.erase(s2[i + j]);
    //                 j++;
    //             }
    //             if (temp.empty())
    //                 return true;
    //         }
    //     }
    //     return false;
    // }

    // Solution v2.0: Time complexity: O(n) ~ ms - Memory: mb
    bool checkInclusion(string s1, string s2)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> freq1(26, 0); // freqency of all characters in string s1
        vector<int> freq2(26, 0); // freqency of all characters in string s2
        int size_s1 = s1.size();
        int size_s2 = s2.size();
        if (size_s1 > size_s2)
            return false;

        int left = 0, right = 0;
        while (right < size_s1)
        {
            freq1[s1[right] - 'a']++;
            freq2[s2[right] - 'a']++;
            right++;
        }
        right--; // to point right to the end of the window
        while (right < size_s2)
        {
            if (freq1 == freq2)
                return true;
            right++;
            if (right != size_s2)
                freq2[s2[right] - 'a']++;
            freq2[s2[left] - 'a']--;
            left++;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.checkInclusion("adc", "dcda") << endl;
    return 0;
}