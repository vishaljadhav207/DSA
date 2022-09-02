#include <iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *next;
};
class graph
{
private:
    Node **arr;

public:
    graph(int n)
    {
        arr = (Node **)new Node[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = nullptr;
        }
    }
    void addedge(int i, int j)
    {
        Node *p;
        p = new Node;
        p->info = j;
        p->next = nullptr;
        if (arr[i] == nullptr)
        {
            arr[i] = p;
        }
        else
        {
            Node *temp;
            temp = arr[i];
            while ((temp->next != nullptr))
            {
                temp = temp->next;
            }
            temp->next = p;
        }
    }
    void showadjcent(int i)
    {
        Node *temp;
        temp = arr[i];
        while (temp != nullptr)
        {
            cout << temp->info << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    graph g(4);
    g.addedge(0, 3);
    g.addedge(0, 2);
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.showadjcent(0);
    g.showadjcent(1);

    return 0;
}
