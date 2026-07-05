#include<iostream>
using namespace std;
int main (){
    int num;
    int Isprime = 1;
    cout<<"Enter number : ";
    cin >> num ;
    for (int i = 2 ; i < num/2 ; i++ ){
        if (num % i == 0 ){
           Isprime = 0 ; 
           break;
        }
    }
    if (Isprime == 1 ){
        cout<<"Yes prime number";
    }
    else {
        cout<<"Not a prime number";
    }
return 0; 
}