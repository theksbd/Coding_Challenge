// success
// https://practice.geeksforgeeks.org/problems/ticket-counter/0/
#include <iostream>
using namespace std;

int ticketCounter(int n, int k)
{
    int pass = n / k;
    int pass1 = (pass % 2 == 0) ? pass - 2 : pass - 1;
    int index = pass1 / 2;
    if (n % k == 0)
    {
        if (pass % 2 == 0)
            return n - k * (index + 1) + 1;
        return k * index + k;
    }
    if (pass % 2 == 0)
        return n - k * (index + 1);
    return k * (index + 1) + 1;
}

int main()
{
    //code
    cout << ticketCounter(25, 7) << endl;
    return 0;
}