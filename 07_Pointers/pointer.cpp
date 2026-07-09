#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n = 10;
 int *p = &n;
 cout<<"pointer"<<endl;
 cout<<*p<<endl;
 cout<<&n<<endl;
 cout<<"enter *p : ";
 cin>>*p;
 cout<<"print new value"<<endl;
 cout<<n;
 return 0;
}