#include <iostream>
using namespace std;
class stack
{
private:
    int top;
    int arr[5];
    const int MAX = 5;

public:
    stack()
    {
        top = -1;
    }
    bool isfull()
    {
        bool f = false;
        if (top == MAX - 1)
        {
            f = true;
        }
        return f;
    }
    // check that stack is empty or not
    bool isEmpty()
    {
        bool f = false;
        if (top == -1)
        {
            f = true;
        }
        return f;
    }
    // get top item from stack without removing it
    int peek()
    {
        int x;
        x = arr[top];
        return x;
    }
    void display()
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
            return;
        }
    }
    void push(int x)
    {
        if (isfull())
        {
            cout << "stack is full" << endl;
            return;
        }
        // push
        top++;
        arr[top] = x;
        cout << "pushed item is " << arr[top] << endl;
    }
   int pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        int x= arr[top];
       //cout << "popped item is" << arr[top] << endl;
        top--;
        return x;
    }
};
int main()
{
    stack ob;
    int num;
    cout << "enter numeber" << endl;
    cin >> num;
    while (num > 0)
    {
        ob.push(num % 2);
        num = num / 2;
    }
    while (ob.isEmpty())
    {
          cout<<ob.pop()<<endl;
    }
    cout << endl;
    return 0;
}