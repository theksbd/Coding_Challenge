// success
// https://leetcode.com/problems/backspace-string-compare
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
#include <numeric>
#include <climits>

using namespace std;

class Solution {
public:
	bool backspaceCompare(string s, string t) {
		string s_temp, t_temp;
		for (size_t i = 0; i < s.size(); i++)
		{
			if (s[i] != '#')
				s_temp.push_back(s[i]);
			else
			{
				if (!s_temp.empty())
					s_temp.pop_back();
			}
		}
		for (size_t i = 0; i < t.size(); i++)
		{
			if (t[i] != '#')
				t_temp.push_back(t[i]);
	            	else
			{
				if (!t_temp.empty())
					t_temp.pop_back();
			}
		}
		return (s_temp == t_temp);
							        }
};

int main()
{
	Solution s;
	cout << s.backspaceCompare("ab#c", "ad#c") << endl;
	return 0;
}
