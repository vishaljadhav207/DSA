#include <iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *next;

public:
};
class CircularLL
{
private:
    Node *start = nullptr;

public:
    CircularLL()
    {
    }
    void insert(int x)
    {
        Node *p;
        p = new Node;
        p->info = x;
        // check that list is empty or not
        if (start == nullptr)
        {
            start = p;
            p->next = start;
            cout << start << ":" << start->info << endl;
        }
        else
        {
            // find last node
            Node *temp;
            temp = start;
            while (temp->next != start)
            {

                temp = temp->next;
            }
            p->next = start;
            start = p;
            temp->next = start;
            cout << start << ":" << start->info << endl;
        }
    }
    void display()
    {
        cout << "*********" << endl;
        Node *temp;
        temp = start;
        do
        {
            cout << temp->info << endl;
            temp = temp->next;
        } while (temp != start);
    }
    void updateNode(int x, int newvalue)
    {
        cout << "****serach*****" << endl;
        Node *temp;
        temp = start;
        do
        {
            if (temp->info == x)
            {
                cout << "found node" << endl;
                temp->info = newvalue;
                cout << temp << ":" << temp->info << endl;
            }
            temp = temp->next;

        } while (temp != start);
    }
    void deleteNode(int x)
    {
        if (start == nullptr)
        {
            cout << "List is Empty!!" << endl;
            return;
        }

        Node *tmp = start, *tmpAdr;
        Node *prev, *last;
        while (tmp->info != x)
        {
            prev = tmp;
            tmp = tmp->next;
        }

        if (tmp == start && tmp->next == start)
        {
            start = nullptr;
            cout << "Deleted item is: " << x << endl;
        }
        else if (tmp == start)
        {

            last = start;
            while (last->next != start)
            {
                last = last->next;
            }
            start = tmp->next;
            last->next = start;
            cout << "Deleted item is: " << x << endl;
        }
        else if (tmp->next == start)
        {
            prev->next = start;
            cout << "Deleted item is: " << x << endl;
        }
        else
        {
            prev->next = tmp->next;
            cout << "Deleted item is: " << x << endl;
        }
    }
};
int main()
{
    CircularLL ob;
    ob.insert(10);
    ob.insert(20);
    ob.insert(30);
    cout << "Before update" << endl;
    ob.display();
    ob.updateNode(20, 70);
    cout << "After update" << endl;
    ob.display();
    ob.deleteNode(20);
    return 0;
}