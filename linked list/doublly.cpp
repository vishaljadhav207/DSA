#include <iostream>
using namespace std;
class Node
{
private:
public:
    int info;
    Node *next;
    Node *prev;
};
class linkedlist
{
private:
public:
    Node *head = nullptr;
    Node *tail = nullptr;

    void insert(int x)
    {
        Node *p;
        p = new Node;
        p->info = x;
        if (head == nullptr)
        {
            p->next = nullptr;
            p->prev = nullptr;
            head = p; // becoze of the same node
            tail = p;
            cout << "first node " << head->info << endl;
        }
        else
        {
            p->next = head;
            head->prev = p;
            head = p;
            p->prev = nullptr;
        }
    }
    void display()
    {
        Node *temp;
        temp = head;

        do
        {
            cout << temp->info << endl;
            temp = temp->next;

        } while (temp != nullptr);
        cout << "---------------------------------------------\n";
        temp = tail;
        do
        {
            cout << temp->info << endl;
            temp = temp->prev;
        } while (temp != nullptr);
    }
};
int main()
{
    linkedlist ob;
    ob.insert(10);
    ob.insert(20);
    ob.insert(30);
    ob.display();
}
