#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int x , int y);
int main() {
 int n , m;
 cout<<"Enter number : ";
 cin>>n>>m;
 int ANS =sum(n,m);
 cout<<"sum is equal to " << ANS ;
 return 0;
}
int sum(int x , int y){
    int ans = x + y;
    return ans;
}