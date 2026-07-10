#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swapMinMax (int *arr , int size){
    int Min = 0 ;
    int max = 0 ;
    for(int i = 0 ; i < size ; i++){
        if (arr[i] > arr[max]){
            max = i;
            
        }
        else if (arr[i] < arr[Min]){
            Min = i;
        }

    }
    int temp = 0 ;
    temp = arr[Min] ;
    arr[Min] = arr[max] ;
    arr[max] = temp;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
}
}
int main() {
    int arr[5] = {23,1,24,56,78};
    swapMinMax (arr , 5);
   return 0;
}