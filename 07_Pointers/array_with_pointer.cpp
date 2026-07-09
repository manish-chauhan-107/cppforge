#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    *(p+3) = 100;
    cout<<(p+3)<<endl;
    cout<<*(p+3)<<endl;
    for (int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
     }
 return 0;
}