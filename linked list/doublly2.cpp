#include <iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *prev;
    Node *next;
};
class DoublyLL
{
private:
    Node *head = nullptr;
    Node *tail = nullptr;

public:
    void insertAtEnd(int x)
    {
        Node *newnode;
        newnode = new Node;
        newnode->info = x;
        // check that list is empty
        if (head == nullptr)
        {
            // this is first node
            newnode->prev = nullptr;
            newnode->next = nullptr;
            head = newnode;
            tail = newnode;
            cout << "First node " << head->info << endl;
        }
        else
        {
            // n node
            newnode->next = nullptr;
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
            cout << "Inserted  node at end " << tail->info << endl;
        }
    }
    void forward()
    {
        cout << "#############forward#############" << endl;
        Node *temp;
        temp = head;
        while (temp != nullptr)
        {
            cout << temp->info << endl;
            temp = temp->next;
        }
    }
    void reverse()
    {
        cout << "#############reverse#############" << endl;
        Node *temp;
        temp = tail;
        while (temp != nullptr)
        {
            cout << temp->info << endl;
            temp = temp->prev;
        }
    }
    void deletenode(int x)
    {
        Node *temp;
        temp = head;
        bool found = false;

        while (temp != nullptr)
        {
            if (temp->info == x)
            {
                found = true;

                break;
            }
            temp = temp->next;
        }
        if (found == true)
        {
            cout << "Found node" << endl;
            Node *p, *n;
            p = temp->prev;
            n = temp->next;
            if (p == nullptr && n == nullptr)
            {
                head = nullptr;
                tail = nullptr;
            }
            else
            {
                p->next = n;
                n->prev = p;
            }
        }
        else
        {
            cout << "node not Found " << endl;
        }
    }
    void deleteLastNode()
    {
        Node *p;
        p=tail->prev;
        p->next=nullptr;
        tail=p;
        

    }
};
int main()
{
    DoublyLL ob;
    ob.insertAtEnd(10);
    ob.insertAtEnd(20);
    ob.insertAtEnd(30);
    ob.insertAtEnd(40);
    ob.forward();
    ob.reverse();
    ob.deletenode(30);
    ob.deleteLastNode();
    ob.forward();
    return 0;
}
