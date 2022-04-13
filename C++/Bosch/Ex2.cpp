#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    map<int, int> freq;
    for (int x : A)
        freq[x]++;
    map<int, int>::iterator it = freq.begin();
    while (it != freq.end())
    {
        it->second--;
        res++;
        it++;
    }
    it = freq.end();
    it--;
    it--;
    while (it != freq.begin())
    {
        if (it->second != 0)
            res++;
        it--;
    }
    return res;
}

int main()
{
    vector<int> A = {2, 1};
    cout << solution(A) << endl;
    return 0;
}