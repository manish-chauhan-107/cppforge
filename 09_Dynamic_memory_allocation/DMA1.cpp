#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of dynamically allocated array"<<endl;
    cin>>n;
    int *arr = new int[n];
    for (int i =0 ; i<n ; i++){
        cout<<"enter element "<<(i+1)<<endl;
        cin>>arr[i];
    }
    for (int i =0 ; i<n ; i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<"\n";
    delete [] arr;
    arr = nullptr;
    if (arr == nullptr){
        cout<<"Memory has been deleted. "<<endl;
    }
 return 0;
}
