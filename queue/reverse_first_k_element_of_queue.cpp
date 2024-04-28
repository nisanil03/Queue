#include<bits/stdc++.h> 
using namespace std;
void reverseofK(queue<int> &q, int k)
{
    // step1 : queue -> k element ->stack
    
    stack<int> s;
    int count = 0;
    int n = q.size();

    if (k == 0 || k > n)
    {
        return;
    }

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count == k)
            break;
    }
    // step2 : stack  -> q me qapas
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    // step 3: push n - k elements from q front to back
    count = 0;
    while (!q.empty() && (n - k != 0))
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if (count == n - k)
            break;
    }
}
int main()
{
    queue<int> q;
    q.push(30);
    q.push(20);
    q.push(10);
    q.push(50);
    q.push(60);

    reverseofK(q, 2);

    cout << "print Queue" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void reverseKQueue(queue<int> &q, int k)
// {
//     stack<int> s;
//     int count = 0;
//     int n = q.size();
//     // Extra condition
//     if (k == 0 || k > n)
//     {
//         return;
//     }
//     // First insert k elements inside the stack
//     while (!q.empty())
//     {
//         int temp = q.front();
//         q.pop();
//         s.push(temp);
//         count++;
//         if (count == k)
//         {
//             break;
//         }
//     }
//     // Push into the queue from stack
//     while (!s.empty())
//     {
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
//     // Push the n-k elements
//     count = 0;
//     while (!q.empty() && (n - k != 0))
//     {
//         int temp = q.front();
//         q.pop();
//         q.push(temp);
//         count++;
//         if (count == n - k)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     queue<int> q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(12);
//     q.push(15);
//     int k = 2;
//     reverseKQueue(q, k);
//     // Printing queue
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     return 0;
// }