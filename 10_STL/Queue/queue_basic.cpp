#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int n;
    for (int i = 0 ; i < 3 ; i++){
        cout<<"Enter element of queue : ";
        cin>>n;
        q.push(n);    
    }
    cout<<"frist element of queue"<<endl;
    cout<<q.front() <<endl;
    cout<<"Size of queue."<<endl;
    cout<<q.size()<<endl;
    q.pop();// remove 1st element
    cout<<"frist element after use of pop()."<<endl;
    cout<<q.front()<<endl;
    cout<<"Size after use of pop()."<<endl;
    cout<<q.size()<<endl;
 return 0;
}