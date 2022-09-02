#include <iostream> //using boolean method
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
    bool isfull()
    {
        bool f = false;
        if (rear == max - 1)
        {
            f = true;
        }
        return f;
    }
    bool isempty()
    {
        bool f = false;
        if (rear < front)
        {
            f = true;
        }
        return f;
    }
    void enqueue(int x)
    {
        if (isfull())
        {

            cout << "queue is full" << endl;
            return;
        }
        rear++;
        arr[rear] = x;
        cout << "inserted item is" << arr[rear] << endl;
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
            return;
        }
        cout << "deleted item is " << arr[front] << endl;
        front++;
    }
    void display()
    {
        cout << "=========================================\n";
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