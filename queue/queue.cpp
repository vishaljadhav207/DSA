#include <iostream>
using namespace std;
class queue
{
private:
    int rear;
    int front;
    int max = 5;
    int arr[5];

public:
    queue()
    {
        rear = -1;
        front = 0;
    }
    void enqueue(int x)
    {
        if (rear == max - 1)
        {
            cout << "queue is full"<<endl;
            return ;
        }
        rear++;
        arr[rear] = x;
        cout << "inserted item is" << arr[rear] << endl;
    }
    void dequeue()
    {
        if (rear < front)
        {
            cout << "queue is empty"<<endl;
            return;
        }
        cout << "deleted item is " << arr[front] << endl;
        front++;
    }
    void display()
    {
        cout<<"======================================\n";
        int i;
        for (i = front; i <= rear; i++)
        {
            cout << "queue item is" << arr[i] << endl;
        }
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
}