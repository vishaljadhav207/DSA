#include<iostream>
using namespace std;
class Node
{
private:
public:
    int info;
    Node *next;
};
class LinkedList
{
private:
    /* data */
public:
    Node *start = nullptr;
    // LinkedList(/* args */);
    void insert(int x)
    {
        // create New Node
        Node *p;
        p = new Node;
        // check that list is empty or not
        p->info = x;
        if (start == nullptr)
        {
            // first node
            p->next = nullptr;
            start = p;
        }
        else
        {
            p->next = start;
            start = p;
        }
        cout << "Inserted item is: " << start->info << endl;
    }
    void show()
    {
        cout << "---------------------------------------" << endl;
        Node *temp;
        temp = start;
        while (temp != nullptr)
        {
            cout << temp->info << endl;
            temp = temp->next;
        }
    }
    void remove()
    {
        if (start == nullptr)
        {
            cout << "list is empty!!" << endl;
            return;
        }
        cout << "removed item is : " << start->info << endl;
        start = start->next;
    }
    void Choice()
    {
        int choice;
        do
        {
            cout << "Enter 0 for exit" << endl
                 << "Enter 1 for insertion" << endl
                 << "Enter 2 for deletion" << endl
                 << "Enter 3 for display" << endl;
            cout << "Enter Your choice: " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                int input;
                cout << "Enter item to insert:" << endl;
                cin >> input;
                insert(input);
                break;
            case 2:
                remove();
                break;
            case 3:
                show();
                break;

            default:
                break;
            }
        } while (choice != 0);
    }
};

int main()
{
    LinkedList ob;
    ob.insert(10);
    ob.insert(20);
    ob.insert(30);
    ob.insert(40);
    ob.insert(50);
    // ob.show();
    // ob.remove();
    // ob.remove();
    // ob.remove();
    // ob.show();
    // ob.show();
    ob.Choice();
    return 0;
}