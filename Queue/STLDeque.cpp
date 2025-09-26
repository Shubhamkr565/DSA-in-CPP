#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.push_front(2);
    dq.push_front(1);

    cout<<"Front: "<<dq.front()<<", Rear: "<<dq.back()<<endl;
    cout<<"Size: "<<dq.size()<<endl;

    dq.pop_back();
    dq.pop_front();
    return 0;
    
}