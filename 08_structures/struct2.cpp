#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct student{
    string name ;
    int age ;
    float cgpa;
};
int main() {
    student e13;
    cout<<"Enter name of student : ";
    getline(cin , e13.name);
    cout<< " Enter age of student  : ";
    cin>> e13.age;
    cout<<"Enter cgpa of student : ";
    cin>> e13.cgpa;
    cout<< "Name : " << e13.name << endl;
    cout<< "Age : " << e13.age << endl;
    cout<< "CGPA : " << e13.cgpa << endl;

 return 0;
}