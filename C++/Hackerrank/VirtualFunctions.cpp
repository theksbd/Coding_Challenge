// success
// https://www.hackerrank.com/challenges/virtual-functions/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    virtual void getdata() = 0; // pure virtual function
    virtual void putdata() = 0; // pure virtual function
};

class Professor : public Person
{
protected:
    int publications;
    int cur_id;
    static int id;

public:
    Professor()
    {
        this->id++;
        this->cur_id = id;
    }

    void getdata()
    {
        cin >> this->name >> this->age >> this->publications;
    }

    void putdata()
    {
        cout << this->name << ' ' << this->age << ' ' << this->publications << ' ' << this->cur_id << '\n';
    }
};

class Student : public Person
{
protected:
    int marks[6];
    int cur_id;
    static int id;

public:
    Student()
    {
        this->id++;
        this->cur_id = id;
    }

    void getdata()
    {
        cin >> this->name >> this->age;
        for (int i = 0; i < 6; i++)
            cin >> this->marks[i];
    }

    void putdata()
    {
        int sum = 0;
        for (int x : this->marks)
            sum += x;
        cout << this->name << ' ' << this->age << ' ' << sum << ' ' << this->cur_id << '\n';
    }
};

int Professor::id = 0;
int Student::id = 0;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    for (int i = 0; i < n; i++)
    {
        Person *per;
        cin >> val;
        if (val == 1)
            // If val is 1 current object is of type Professor
            per = new Professor;
        else
            per = new Student; // Else the current object is of type Student
        per->getdata();        // Get the data from the user.
        for (int i = 0; i < n; i++)
            per->putdata(); // Print the required output for each object.
    }
    return 0;
}
