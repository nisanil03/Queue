#include <bits/stdc++.h>
using namespace std;
class Deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    // constructur
    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void pushRear(int data)
    {
        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            cout << "Queue is full, cannot insert " << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pushfront(int data)
    {
        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            cout << "Queue is full, cannot insert " << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size- 1;
            arr[rear] = data;
        }
        else
        {
            front--;
            arr[rear] = data;
        }
    }
    void popfont()
    {
        if (front == -1)
        {
            cout << "Q is empty , cannot pop " << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void poprear()
    {

        if (front == -1)
        {
            cout << "Q is empty , cannot pop " << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
   Deque dq(10);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);
    dq.pushRear(70);
    dq.pushRear(80);
    dq.pushRear(90);
    dq.pushRear(100);

    dq.print();



    return 0;
}