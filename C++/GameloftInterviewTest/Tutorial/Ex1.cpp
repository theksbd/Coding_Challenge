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

bool exists(int ints[], int size, int k)
{
    // check if k exists in ints using binary_search
    return binary_search(ints, ints + size, k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(ints) / sizeof(ints[0]);
    int k = 5;
    exists(ints, size, k) ? cout << "true" : cout << "false";
    return 0;
}