#include <iostream>
using namespace std;
class Node
{
private:
public:
    int info;
    Node *next;
};

class Linkedlist
{
public:
    Node *start = nullptr;
    void insert(int x)
    {
        Node *ptr;
        ptr = new Node;
        ptr->info = x;
        if (start == nullptr)
        {
            ptr->next = nullptr;
            start = ptr;
        }
        else
        {
            ptr->next = start;
            start = ptr;
        }
    }
    void insertRear(int x)
    {
        Node *ptr;
        ptr = new Node;
        ptr->info = x;
        ptr->next = nullptr;
        if (start == nullptr)
        {
            ptr->next = nullptr;
            start = ptr;
        }
        else
        {
            Node *temp;
            temp = start;
            while (temp != nullptr)
            {

                if (temp->next == nullptr)
                {
                    temp->next = ptr;
                    return;
                }
                temp = temp->next;
            }
        }
    }
    void Display()
    {
        cout << ":-)X----------------------------X:-)\n";
        Node *temp;
        temp = start;
        while (temp != nullptr)
        {
            cout << temp->info << endl;
            temp = temp->next;
        }
    }
    void deleteItem()
    {
        if (start == nullptr)
        {
            cout << "list is empty!!!!! ";
            return;
        }
        cout << "deleted item is : " << start->info << endl;
        start = start->next;
    }
    void deleteSpecificitem(int x)
    {
        Node *tmp;
        tmp = start;
        Node *prev;

        while (tmp != nullptr)
        {
            if (tmp->info == x)
            {
                prev->next = tmp->next;
                return;
            }
            prev = tmp;
            tmp = tmp->next;
        }
    }
    void deleteRear()
    {

        Node *temp;
        temp = start;
        Node *prev;
        while (temp != nullptr)
        {
            if (temp->next == nullptr)
            {
                prev->next = nullptr;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    void updateNode(int x, int y)
    {
        Node *tmp1;
        tmp1 = start;

        while (tmp1 != nullptr)
        {
            if (tmp1->info == x)
            {
                tmp1->info = y;
                return;
            }
            tmp1 = tmp1->next;
        }
    }
    void Choice()
    {
        int choice;
        do
        {
            cout << "Enter 0 for exit" << endl
                 << "Enter 1 for insert" << endl
                 << "Enter 2 for delete" << endl
                 << "Enter 3 for display" << endl
                 << "Enter 4 for delete specific item" << endl
                 << "Enter 5 for updateNode" << endl
                 << "Enter 6 for insert rear item" << endl
                 << "Enter 7 for delete rear item" << endl;
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
                deleteItem();
                break;
            case 3:
                Display();
                break;
            case 4:
                int del;
                cout << "enter specific item:" << endl;
                cin >> del;
                deleteSpecificitem(del);
                break;
            case 5:
                int update, updated;
                cout << "Enter Node value which you have to update  :"
                     << endl;
                cin >> update;
                cout << "Enter your new value which you have to update:\n";
                cin >> updated;
                updateNode(update, updated);
                break;
            case 6:
                int rear;
                cout << "Enter rear item:" << endl;
                cin >> rear;
                insertRear(rear);
                break;
            case 7:
                deleteRear();
                break;
            default:
                break;
            }
        } while (choice != 0);
    }
};

int main()
{
    Linkedlist ob;

    ob.insert(10);
    ob.insert(20);
    ob.insert(30);
    ob.insert(40);
    ob.insert(50);
    // ob.insertRear(60);
    // ob.deleteRear();
    // ob.deleteSpecificitem(20);
    // ob.Display();
    // ob.updateNode(30, 90);

    ob.Choice();
    return 0;
}