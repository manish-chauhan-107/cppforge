//
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cout<<"enter number : ";
 cin>> n ;
 int a = n/20;
 if (a*20 == n){
    cout <<"no of notes of 20 : "<< a <<endl;
 }
 else{
    int b = (n-(a*20))/10;
    int m = (a*20)+(b*10);
    if(m == n){
        cout<< "no of notes of 20 : "<<a<<endl;
        cout<< "no of notes of 10 : "<<b<<endl;
    }
    else{
        int c = (n-m)/5;
        int p = m + (c*5);
        if(p == n){
        cout<< "no of notes of 20 : "<<a<<endl;
        cout<< "no of notes of 10 : "<<b<<endl;
        cout<< "no of notes of 5 : "<<c<<endl;
        }
        else{
            int d = (n-p);
            cout<< "no of notes of 20 : "<<a<<endl;
            cout<< "no of notes of 10 : "<<b<<endl;
            cout<< "no of notes of 5 : "<<c<<endl;
            cout<< "no of notes of 1 : "<<d<<endl;
        }

    }
 }
 return 0;
}