#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n ; // n indicate the number of row.
 int m ; // indicate  column
 cout <<"enter value of no of row ";
 cin>> n ;
 int **arr = new int*[n];  // this line indicate the adderess of row  store in arr .
                           //(pointer store address of another pointer)
  cout<< "enter value of no. of column";
  cin>> m;
 for(int i = 0; i < n ; i++){
    arr[i] = new int[m];
    }
    for(int i = 0; i < n; i++){
        cout <<"enter number of row : "<< i+1 <<endl;
        for(int j = 0; j < m; j++) {
            
            cin >> arr[i][j];
    }
    }
    cout<<"your array :"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
         cout<< arr[i][j]<<" ";
         }
        cout<<endl;
    }
 return 0;
}