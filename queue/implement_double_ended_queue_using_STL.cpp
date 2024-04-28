#include<bits/stdc++.h>
using namespace std;
int main(){
// creation 
deque<int>dq;

dq.push_front(10);
dq.push_front(20);
dq.push_front(40);
dq.push_front(50);
dq.push_front(80);


cout<<"size "<<dq.size()<<endl;
dq.pop_front();
cout<<"size "<<dq.size()<<endl;
dq.pop_back();
cout<<"size "<<dq.size()<<endl;

cout<<"front "<< dq.front()<<endl;

cout<<"back "<< dq.back()<<endl;

if(dq.empty()){
    cout<<"DQ is empty"<<endl;
}
else{
    cout<<"DQ is empty"<<endl;
}

    return 0;
}