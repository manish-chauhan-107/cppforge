#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 vector<vector<int>> v(3 , vector<int>(4)); // here we make a vector of 3 row with each 4 element
 for (int i = 0 ; i < 3 ; i++ ){
    cout<<"Enter element of  row : "<<i+0 <<endl;
    for (int j = 0 ; j < 4 ; j++){
        cin>> v[i][j];
    }
 }
 cout<<"The given metrix is : "<<endl;
 for (int i = 0 ; i < 3 ; i++ ){
    for (int j = 0 ; j < 4 ; j++){
        cout<< v[i][j]<< " ";
    }
    cout<<endl;
 }
 return 0;
}