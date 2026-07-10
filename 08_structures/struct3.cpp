#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int age;
};
int main() {
 student nit[3];
 nit[0].name = "Manish chauhan";
 nit[1].name = "Ruhul amin";
 nit[2].name = "Vishnu kant rai";
 nit[0].age = 19;
 nit[1].age = 19;
 nit[2].age = 19;
for (int i = 0 ; i < 3 ; i++){
    cout<< "Name : "<< nit[i].name <<endl;
    cout<< "Age : " << nit[i].age <<endl;
}
 return 0;
}