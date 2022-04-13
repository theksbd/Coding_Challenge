#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

int solution(vector<int> &blocks)
{
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    for (size_t i = 0; i < blocks.size(); i++)
    {
        size_t iL = i; // index of first frog that will jump to the left
        size_t iR = i; // index of second frog that will jump to the right
        if (iL != 0)
        {
            while (blocks[iL - 1] >= blocks[iL])
            {
                iL--;
                if (iL == 0)
                    break;
            }
        }
        if (iR != blocks.size() - 1)
        {
            while (blocks[iR + 1] >= blocks[iR])
            {
                iR++;
                if (iR == blocks.size() - 1)
                    break;
            }
        }
        res = max(res, int(iR - iL + 1));
        i = iR; // skip straight foward to index of iR (no need to loop through the way to iR, because the output distance will be 100% smaller), and then the variable i will be increased by 1 due to the update section of for loop
    }
    return res;
}

int random_int(int a, int b)
{
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(0));
    int t = 10;
    int num_ele = 10;
    while (t--)
    {
        vector<int> A;
        int i = 0;
        while (i++ < num_ele)
        {
            int val = random_int(1, 20);
            A.push_back(val);
        }
        for (int x : A)
            cout << x << ' ';
        cout << "\nSolution: " << solution(A) << endl;
    }
    return 0;
}