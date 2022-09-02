#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
// Reverse 
void reverse(string &str)
{
    // create  empty stack
    stack<int> estack;
 
    // Push each character in  stack
    for (char ch: str) {
        estack.push(ch);
    }
 
    // pop all  and
    
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = estack.top();
        estack.pop();
    }
}
 
int main()
{
    string str ="hello!";
     reverse(str);
    cout << str;
     return 0;
}
