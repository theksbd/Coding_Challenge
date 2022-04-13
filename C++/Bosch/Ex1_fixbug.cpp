#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int solution(vector<int> &S)
{
    int max_sum = 0;
    int current_sum = 0;
    int positive = 0;
    for (size_t i = 0; i < S.size(); ++i)
    {
        int item = S[i];
        if (item < 0)
        {
            if (max_sum < current_sum)
            {
                max_sum = current_sum;
            }
            current_sum = 0;
        }
        else
        {
            positive = 1;
            current_sum += item;
        }
    }
    if (current_sum > max_sum)
    {
        max_sum = current_sum;
    }
    if (positive)
    {
        return max_sum;
    }
    return -1;
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
            int val = random_int(-5, 10);
            A.push_back(val);
        }
        for (int x : A)
            cout << x << ' ';
        cout << "\nSolution: " << solution(A) << endl;
    }
    return 0;
}