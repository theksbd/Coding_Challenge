// success
// https://www.codewars.com/kata/57814d79a56c88e3e0000786/train/cpp
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

// using namespace std;

std::string encrypt(std::string text, int n)
{
    if (text == "" || n <= 0)
        return text;
    while (n-- > 0)
    {
        int size = text.size();
        std::string strOdd = "", strEven = "";
        for (int i = 0; i < size; i += 2)
        {
            if (i != size - 1)
                strOdd += text[i + 1];
            strEven += text[i];
        }
        text = strOdd + strEven;
    }
    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    if (encryptedText == "" || n <= 0)
        return encryptedText;
    while (n-- > 0)
    {
        int size = encryptedText.size();
        int sizeOdd = 0, sizeEven = 0;
        if (size % 2 == 0)
            sizeOdd = sizeEven = size / 2;
        else
        {
            sizeOdd = size / 2;
            sizeEven = size - sizeOdd;
        }
        std::string strOdd = encryptedText.substr(0, sizeOdd), strEven = encryptedText.substr(sizeOdd);
        for (int i = 0, j = 0; i < size; i += 2, j++)
        {
            encryptedText[i + 1] = strOdd[j];
            encryptedText[i] = strEven[j];
        }
    }
    return encryptedText;
}

int main()
{
    std::cout << encrypt("This is a test!", 2) << std::endl;
    std::cout << decrypt("hsi  etTi sats!", 1) << std::endl;
    std::cout << decrypt("s eT ashi tist!", 2) << std::endl;

    // int n = 0;
    // while (n <= 9)
    // {
    //     /* code */
    //     std::cout << encrypt("This kata is very interesting abcaefqwert", n) << std::endl;
    //     n++;
    // }

    return 0;
}