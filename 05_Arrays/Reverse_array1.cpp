#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 int arr[10] = {1,2,3,4,5,6,7,8,9,0};
 for (int i = 0 ; i < 5 ; i++){
    int temp = 0 ;
    temp = arr[i] ;
    arr[i] = arr[9 - i];
    arr[9-i] = temp;
 }
 for (int m = 0 ; m < 10 ; m++){
    cout<<arr[m]<<" ";
 }
 return 0;
}