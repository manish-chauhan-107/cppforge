#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void lsearch (int arr[] , int size  , int num){
    int Ispresent = 0; 
    for (int i = 0 ; i < size ; i++){
        if(num == arr[i]){
            Ispresent = 1;
            break;
        }
    }
    if (Ispresent == 1){
        cout <<"YES ELEMENT IS PRESENT IN ARRAY";
    }
    else{
        cout<<"ELEMENT IS NOT PRESENT IN ARRAY";
    }
}

int main() {
 int arr[10] = {12,23,45,67,89,90,98,76,65,43};
 lsearch (arr , 10 , 4);
 return 0;
}