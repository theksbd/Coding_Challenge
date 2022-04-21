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

int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    priority_queue<double> pq;
    double totalPollution = 0.0;
    for (int x : A)
    {
        pq.push(double(x));
        totalPollution += double(x);
    }
    double currentTotalPollution = totalPollution;
    while (!pq.empty())
    {
        double highestPollution = pq.top();
        pq.pop();
        pq.push(highestPollution / 2.0);
        currentTotalPollution -= highestPollution / 2.0;
        res++;
        if (currentTotalPollution <= (totalPollution / 2.0))
            break;
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
    int num_element = 5;
    while (t--)
    {
        vector<int> A;
        for (int i = 0; i < num_element; i++)
        {
            int element = random_int(0, 10);
            A.push_back(element);
        }
        for (int x : A)
            cout << x << ' ';
        cout << "\nSolution: ";
        cout << solution(A) << endl;
    }
    return 0;
}