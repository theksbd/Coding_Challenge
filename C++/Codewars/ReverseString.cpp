// success
// https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp
#include <iostream>
#include <string>

using namespace std;

string reverseString(string str)
{
    int size = str.size();
    for (int i = 0; i < size / 2; i++)
    {
        char c = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = c;
    }
    return str;
}

int main()
{
    cout << reverseString("word") << endl;
    return 0;
}