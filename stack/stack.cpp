#include <iostream>
using namespace std;
class stack
{
private:
    int top;
    int MAX = 3;
    int arr[3];

public:
    stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top == MAX - 1)
        {
            cout << "stack is full" << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << "pushed item is:" << arr[top] << endl;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return;
        }
        cout << "====================================\n";
        cout << "popped item is="
             << arr[top] << endl;
    }
};
int main()
{
    stack ob;
    ob.push(10);
    ob.push(20);
    ob.push(30);
    ob.push(40);
    ob.pop();
}