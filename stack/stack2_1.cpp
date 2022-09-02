#include <iostream>
using namespace std;
class stack
{
private:
    int top;
    int arr[3];
    const int MAX = 3;

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
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<endl;
            return;
        }
    }
    void push(int x)
    {
        if(isfull())
        {
            cout<<"stack is full"<<endl;
            return;
        }
        //push
        top++;
        arr[top]=x;
        cout<<"pushed item is "<<arr[top]<<endl;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"popped item is"<<arr[top]<<endl;
        top--;
    }
};
int main()
{
    stack ob;
    ob.push(10);
    ob.push(20);
    ob.push(30);
    ob.push(40);
    cout << "top item is " << ob.peek() << endl;
    // ob.display();
    ob.pop();
    ob.pop();
    ob.pop();
    ob.pop();
    return 0;
}