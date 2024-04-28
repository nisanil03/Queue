#include <bits/stdc++.h>
using namespace std;
class CirQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // constructer
    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // queue full or not
        // single element case -> first element
        // circule nature
        // normal flow

        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            cout << "Queue is full, cannot insert " << endl;
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
    void pop()

    {
        // check queue is empty or not 
        // single element
        // circular neature
        // normal flow
        if (front == -1)
        {
            cout << "Q is empty , cannot pop " << endl;
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
};
int main()
{

    return 0;
}