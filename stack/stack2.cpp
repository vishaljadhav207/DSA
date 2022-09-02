#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    char arr[6];
    const int MAX=6;
public:
    stack()
    {
        top=-1;
    }
    bool isfull()

    {
        bool f=false;
        if(top==MAX-1)
        {
            f=true;
        }
        return f;
    }
    bool isEmpty()
    {
        bool f=false;
        if(top==-1)
        {
            f=true;
        }
        return f;
    }
    int peek()
    {
        char x;
        x=arr[top];
        return x;
    }
    void display()
    {
        char i;
        for(i=top;i>=0;i--)

        {
            cout<<arr[i]<<endl;
        }
    }
    void push(char  x)
    {
        if(isfull())
        {
            cout<<"stack is full"<<endl;
            return;
        }
        //push
        top++;
        arr[top]=x;
        cout<<"Pushed item is "<<arr[top]<<endl;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Poped item is"<<arr[top]<<endl;
        top--;
    }
};
int main()
{
    stack st;
    st.push('h');
    st.push('e');
    st.push('l');
    st.push('l');
    st.push('o');
    st.push('!');
    cout<<"poped item is"<<st.peek()<<endl;
 st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    return 0;
}