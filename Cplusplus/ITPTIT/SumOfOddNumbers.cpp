// success
// https://code.itptit.com/problems/100023
#include <iostream>
using namespace std;
// ITPTIT - Mai la anh em

int main()
{
    // Your code goes here
    int n = 0;
    cin >> n;
    int size = (n - 1) / 2 + 1;
    int res = double(1.0 + n) * double(size) / 2.0;
    cout << res << endl;
    return 0;
}