#include <bits/stdc++.h>
using namespace std;

int main() {
 stack<int> s ;
 s.push(4);
 s.push(5);
 s.push(7);
 cout << s.top()<<endl; // give 7
 s.pop();
 cout << s.top(); // give 5
 return 0;
}