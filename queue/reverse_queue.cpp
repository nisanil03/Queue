#include <bits/stdc++.h>
using namespace std;
// approach 1 using quq=eue;
/*void reverseQueue(queue<int> &q)
{
    stack<int> s;

    // step1 : put all element of q into s
    while (!q.empty())
    {
        int element = q.front();
        q.pop();

        s.push(element);
    }
    // step 2 : put all eleemnt from stackinto q
    while (!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}*/
void revereseQueueRecursion(queue<int> &q)
{

    // base case ;
    if (q.empty())
    {
        return;
    }
    // save first element of queue
    int element = q.front();
    q.pop();

    // recursive cell
    revereseQueueRecursion(q);

    // push back the element
    q.push(element);
}
int main()
{
    queue<int> q;
    q.push(30);
    q.push(20);
    q.push(10);
    q.push(50);
    q.push(60);

    //reverseQueue(q);
    revereseQueueRecursion(q);

    cout << "print Queue" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}