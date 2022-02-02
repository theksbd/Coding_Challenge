// success
// https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true
#include <iostream>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
private:
    long long length;
    long long breadth;
    long long height;

public:
    Box() : length(0), breadth(0), height(0){};
    Box(long long l, long long b, long long h) : length(l), breadth(b), height(h){};
    Box(const Box &b)
    {
        this->length = b.length;
        this->breadth = b.breadth;
        this->height = b.height;
    }

    long long getLength()
    {
        return this->length;
    }
    long long getBreadth()
    {
        return this->breadth;
    }
    long long getHeight()
    {
        return this->height;
    }
    long long CalculateVolume()
    {

        return this->length * this->breadth * this->height;
    }

    bool operator<(Box b)
    {
        if (this->length < b.length ||
            (this->breadth < b.breadth && this->length == b.length) ||
            (this->height < b.height && this->breadth == b.breadth && this->length == b.length))
            return true;
        return false;
    }

    friend ostream &operator<<(ostream &out, const Box &b);
};

ostream &operator<<(ostream &out, const Box &b)
{
    out << b.length << " " << b.breadth << " " << b.height;
    return out;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}