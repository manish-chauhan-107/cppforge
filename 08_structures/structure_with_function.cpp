#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct student {
    string name ;
    int age ;
    string Roll ;
    string branch;
};
void Display(student s[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<< "Name : "<< s[i].name <<endl;
        cout<< "Age : " << s[i].age <<endl;
        cout<< "Roll number : "<<s[i].Roll<<endl;
        cout<< "Branch : "<< s[i].branch << endl;
        cout <<"----------------------------------------"<<endl;
    }
}
int main() {
    student s[3] = {{"Manish Chauhan",19 ,"B25EE013","Electrical & Electronic Eng."},
    {"Ruhul Amin",19,"B25EC014","Electronic & Communication Eng."},
    {"Vishnu kant rai",19,"B25EC022","Electronic & Communication Eng."}
    };
    Display(s,3);
 return 0;
}