// success
// https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
#include <iostream>
#include <string>
using namespace std;

string rot13(string msg)
{
    int size = msg.size();
    for (int i = 0; i < size; i++)
    {
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            if (msg[i] > 'z' - 13)
                msg[i] -= 13;
            else
                msg[i] += 13;
        }
        else if (msg[i] >= 'A' && msg[i] <= 'Z')
        {
            if (msg[i] > 'Z' - 13)
                msg[i] -= 13;
            else
                msg[i] += 13;
        }
    }
    return msg;
}

int main()
{
    cout << rot13("Test") << endl;
    return 0;
}