#include <iostream>
using namespace std;
class CQueue
{
private:
    int rear, front;
    int max = 5;
    int arr[5];

public:
    CQueue()
    {
        rear = -1;
        front = -1;
    }

    void enqueue(int x)
    {
        if ((front == 0 && rear == max - 1) || (rear == front - 1))
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else if (front != 0 && rear == max - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = x;
        cout << "Enqueue item is at postion " << rear << " " << arr[rear] << endl;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        arr[front];
        cout << "Dequeue item is " << arr[front] << endl;

        if (front == rear)
        {
            rear = front = -1;
        }
        else if (front == max - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        cout << "===============================================================" << endl;
        int i;
        if (front == -1)
        {
            cout << "Queue if empty!!" << endl;
            return;
        }
        else if (rear > front)
        {
            for (i = front; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
        else
        {
            for (i = front; i < max; i++)
            {
                cout << arr[i] << endl;
            }
            for (i = 0; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    CQueue c;
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);
    c.enqueue(40);
    c.enqueue(50);
    c.enqueue(60);
    c.dequeue();
     c.enqueue(90);
    // c.dequeue();
    // c.enqueue(100);
    // c.dequeue();
    // c.enqueue(110);
    // c.dequeue();
    // c.enqueue(120);
    // c.dequeue();
    // c.enqueue(130);
    // c.dequeue();
    // c.enqueue(140);
    // c.dequeue();
    // c.enqueue(150);
    c.display();

    return 0;
}
