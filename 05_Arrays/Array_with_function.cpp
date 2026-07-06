#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int arr[] , int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[5] = {10,23,45,67,89};
    display(arr , 5);
 return 0;
}