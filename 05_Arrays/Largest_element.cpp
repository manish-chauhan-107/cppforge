#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void greatest (int arr[] ,int size){
    int great = 0 ;
    for (int i = 0 ; i < size ; i++){
        if (arr[i] > great){
            great = arr[i];
        }
    }
    cout << "Largest number is : "<< great ;
}
int main() {
int arr[5] = {63,97,30,37,38};
greatest (arr , 5);
 return 0;
}