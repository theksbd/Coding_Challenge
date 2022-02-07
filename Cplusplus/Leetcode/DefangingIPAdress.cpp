// success
// https://leetcode.com/problems/defanging-an-ip-address/
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
    string defangIPaddr(string address)
    {
        int count = 3;
        string str = "[.]";
        for (int i = 1; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                address.replace(i, 1, str);
                i += 2;
                count--;
            }
            if (count == 0)
                break;
        }
        return address;
    }
};

int main()
{
    Solution s;
    cout << s.defangIPaddr("255.100.50.0") << endl;
    return 0;
}