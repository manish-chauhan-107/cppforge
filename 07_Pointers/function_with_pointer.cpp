#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void display (int *arr , int size){
    for (int m = 0 ; m < size ; m++){
        cout << *(arr + m) <<" ";
    }
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    display (arr ,10);
 return 0;
}