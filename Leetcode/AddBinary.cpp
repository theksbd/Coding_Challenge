// success
// https://leetcode.com/problems/add-binary/
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
    // Solution v1.0 - Testcases passed but Memory Limit Exceeded
    // string addBinary(string a, string b)
    // {
    //     if (a[0] == '0')
    //         return b;
    //     if (b[0] == '0')
    //         return a;
    //     string res = "";
    //     int size_a = a.size(), size_b = b.size();
    //     int i = 0;
    //     bool carry = false;
    //     while (a[i] != '\0' && b[i] != '\0')
    //     {
    //         string bin = "";
    //         if (a[size_a - 1 - i] == '0')
    //         {
    //             if (carry)
    //             {
    //                 if (b[size_b - 1 - i] == '0')
    //                 {
    //                     bin = "1";
    //                     carry = false;
    //                 }
    //                 else
    //                     bin = "0";
    //             }
    //             else
    //                 bin = b[size_b - 1 - i];
    //             res = bin + res;
    //         }
    //         else
    //         {
    //             if (carry)
    //             {
    //                 if (b[size_b - 1 - i] == '0')
    //                     bin = "0";
    //                 else
    //                     bin = "1";
    //             }
    //             else
    //             {
    //                 if (b[size_b - 1 - i] == '0')
    //                     bin = "1";
    //                 else
    //                 {
    //                     bin = "0";
    //                     carry = true;
    //                 }
    //             }
    //             res = bin + res;
    //         }
    //         i++;
    //     }
    //     if (i == size_a) // if size_a < size_b, while loop above will be terminated cause a will be finished first before b
    //     {
    //         while (b[i] != '\0')
    //         {
    //             string bin = "";
    //             if (b[size_b - 1 - i] == '0')
    //             {
    //                 if (carry)
    //                 {
    //                     bin = "1";
    //                     carry = false;
    //                 }
    //                 else
    //                     bin = "0";
    //             }
    //             else
    //             {
    //                 if (carry)
    //                     bin = "0";
    //                 else
    //                     bin = "1";
    //             }
    //             res = bin + res;
    //         }
    //     }
    //     else // on the other hand, we will reach the end of string b first
    //     {
    //         while (a[i] != '\0')
    //         {
    //             string bin = "";
    //             if (a[size_a - 1 - i] == '0')
    //             {
    //                 if (carry)
    //                 {
    //                     bin = "1";
    //                     carry = false;
    //                 }
    //                 else
    //                     bin = "0";
    //             }
    //             else
    //             {
    //                 if (carry)
    //                     bin = "0";
    //                 else
    //                     bin = "1";
    //             }
    //             res = bin + res;
    //         }
    //     }
    //     if (carry)
    //         res = "1" + res;
    //     return res;
    // }

    // Solution v2.0: Time complexity: O(n) ~ 3ms - Memory: 6.3mb
    string addBinary(string a, string b)
    {
        string res = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        bool carry = false;
        while (i >= 0 || j >= 0)
        {
            int sum = carry ? 1 : 0;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            res.insert(0, to_string(sum % 2));
            carry = sum / 2;
        }
        if (carry)
            res.insert(0, "1");
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.addBinary("111", "101") << endl;
    return 0;
}