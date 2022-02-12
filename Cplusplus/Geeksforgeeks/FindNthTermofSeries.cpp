// success
// https://practice.geeksforgeeks.org/problems/find-n-th-term-of-series-1-3-6-10-15-215506/1/
#include <iostream>
using namespace std;

class Solution
{
public:
  int findNthTerm(int N)
  {
    // code here
    return (N + 1.0) * (N / 2.0);
  }
};

int main()
{
  Solution s;
  cout << s.findNthTerm(10) << endl;
  return 0;
}