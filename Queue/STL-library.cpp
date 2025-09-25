#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"Front: "<<q.front()<<"Rear: "<<q.back()<<endl;
    cout<<"Size: "<<q.size()<<endl;

    q.pop();
    cout<<"After Pop Front: "<<q.front()<<endl;

    cout<<"Elements: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
    
}