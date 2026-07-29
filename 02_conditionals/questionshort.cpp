/*Write a C++ program that takes an integer amount n as input and determines
 the minimum number of currency notes required to make up that amount using 
 denominations of:
₹20
₹10
₹5
₹1
The program should print the number of notes of each denomination used.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"enter value of money";
    cin>> n;
int note20 = n / 20;
n %= 20;

int note10 = n / 10;
n %= 10;

int note5 = n / 5;
n %= 5;

int note1 = n;

cout << "notes of 20: " << note20 << endl;
cout << "notes of 10: " << note10 << endl;
cout << "note of 5: " << note5 << endl;
cout << "note of 1: " << note1 << endl;
return 0 ;
}