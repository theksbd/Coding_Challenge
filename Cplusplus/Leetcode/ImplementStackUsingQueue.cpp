// success
// https://leetcode.com/problems/implement-stack-using-queues/
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
#include <climits>

using namespace std;

class MyStack
{
public:
    int size;
    queue<int> q1;
    MyStack()
    {
        this->size = 0;
    }

    void push(int x)
    {
        this->q1.push(x);
        this->size++;
    }

    int pop()
    {
        for (int i = 0; i < size - 1; i++)
        {
            int x = this->q1.front();
            this->q1.pop();
            this->q1.push(x);
        }
        int val = this->q1.front();
        this->q1.pop();
        this->size--;
        return val;
    }

    int top()
    {
        int val = 0;
        for (int i = 0; i < size; i++)
        {
            val = this->q1.front();
            this->q1.pop();
            this->q1.push(val);
        }
        return val;
    }

    bool empty()
    {
        return (this->size == 0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyStack *obj = new MyStack();
    bool param_0 = obj->empty();
    obj->push(5);
    obj->push(1);
    obj->push(7);
    obj->push(11);
    obj->push(17);
    int param_1 = obj->top();
    int param_2 = obj->pop();
    int param_3 = obj->top();
    bool param_4 = obj->empty();
    cout << param_0 << ' ' << param_1 << ' ' << param_2 << ' ' << param_3 << ' ' << param_4 << endl;
    return 0;
}