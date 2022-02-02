// success
// https://leetcode.com/problems/queries-on-a-permutation-with-key/
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
    vector<int> processQueries(vector<int> &queries, int m)
    {
        vector<int> res;
        vector<int> permutation;
        for (vector<int>::iterator it = queries.begin(); it != queries.end(); it++)
        {
            if (permutation.empty())
            {
                res.push_back(*it - 1);
                permutation.push_back(*it);
            }
            else
            {
                int size = permutation.size();
                bool exe = false; // true if that element is already stored in permutation
                for (int i = 0; i < size; i++)
                {
                    if (*it == permutation.at(i))
                    {
                        res.push_back(i);
                        permutation.erase(permutation.begin() + i);
                        // auto temp = permutation.insert(permutation.begin(), *it);
                        exe = true;
                        break;
                    }
                }
                if (!exe)
                {
                    int countLessThan = 0; // count how many number currently exists in permutation that less than *it
                    for (int i = 0; i < size; i++)
                    {
                        if (permutation.at(i) < *it)
                            countLessThan++;
                    }
                    res.push_back(*it - 1 + size - countLessThan);
                }
                auto temp = permutation.insert(permutation.begin(), *it);
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {3, 1, 2, 1};
    int m = 5;
    vector<int> res = s.processQueries(v, m);
    for (vector<int>::iterator i = res.begin(); i != res.end(); i++)
        cout << *i << " ";
    return 0;
}