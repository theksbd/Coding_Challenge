// success
// https://leetcode.com/problems/capitalize-the-title/
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
    string capitalizeTitle(string title)
    {
        int i = 0, j = 0;
        int size = title.size();
        while (i <= size)
        {
            if (title[i] >= 'A' && title[i] <= 'Z')
                title[i] += 32;
            else if (title[i] == ' ' || title[i] == '\0')
            {
                if (i - j > 2)
                    title[j] -= 32;
                j = i + 1;
            }
            i++;
        }
        return title;
    }
};

int main()
{
    Solution s;
    cout << s.capitalizeTitle("capiTalIze tHe titLe") << endl;
    cout << s.capitalizeTitle("i lOve leetcode") << endl;
    cout << s.capitalizeTitle("First leTTeR of EACH Word") << endl;
    cout << s.capitalizeTitle("a") << endl;
    cout << s.capitalizeTitle("A") << endl;
    return 0;
}