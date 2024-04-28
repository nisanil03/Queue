#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    // inserstion
    q.push(5);
    q.push(15);
    q.push(23);
    q.push(33);
    q.push(43);
    q.push(76);
    q.push(77);

    // size
    cout << "Size of quque is " << q.size() << endl;

    // removal of queue
    q.pop();

    cout << "Size of quque is after removal  " << q.size() << endl;

    if (q.empty())
    {
        cout << "Q is empty " << endl;
    }
    else
    {
        cout << "Q is empty not empty " << endl;
    }

    cout<<"Front element is " << q.front() << endl;

    return 0;
}