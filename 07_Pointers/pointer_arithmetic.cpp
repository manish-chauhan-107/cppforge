#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findLargest (int *ptr , int size){
    int largestelement = *ptr;
    for(int i = 1 ; i < size ; i ++){
        if (largestelement < *(ptr + i)){
            largestelement = *(ptr + i);
        }
        else {
            continue;
        }
    }
    return largestelement ;
}
int main() {
    int arr[10] = {2,3,4,5,6,7,8,9,0,1};
    cout << "Largest element in array is : "<<findLargest (arr , 10);
 return 0;
}