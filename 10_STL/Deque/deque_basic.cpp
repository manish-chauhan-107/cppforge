//A deque (Double Ended Queue) allows insertion and deletion
// from both the front and the back
#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> Dq;
// push element from back
  Dq.push_back(10);
  Dq.push_back(20);
// push element from front
  Dq.push_front(5);
// now remove element form front and back 
    Dq.pop_back();
    Dq.pop_front();
    cout<<"After operation frist element of deque is : ";
    cout << Dq.front() << " ";         
  return 0;
}