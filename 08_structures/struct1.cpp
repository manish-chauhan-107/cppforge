#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct student {
    string name;
    int age;
    float cgpa;
    bool result ;
 };

int main() {
 student e13;
 e13.name = "Manish chauhan";
 e13.age = 19;
 e13.cgpa = 8.79;
 cout<< e13.name <<endl;
 cout<<"Age = "<< e13.age<<endl;
 cout<< "CGPA = " << e13.cgpa;

 return 0;
}