#include <iostream>
using namespace std;
class Node
{
public:                    
    int info;
    Node *next;
};
int main()
{
    Node *start = nullptr;
    Node *ptr;
    // create first node
    ptr = new Node;
    ptr->info = 10;
    ptr->next = nullptr;
    start = ptr;
    // create 2nd node
    ptr = new Node;
    ptr->info = 20;
    ptr->next = start;
    start = ptr;
    // create 3rd node
    ptr = new Node;
    ptr->info = 30;
    ptr->next = start;
    start = ptr;

    Node *temp;
    temp = start;
    while (temp != nullptr)
    {
        cout << temp->info << endl;
        temp = temp->next;
    }
    return 0;
}
