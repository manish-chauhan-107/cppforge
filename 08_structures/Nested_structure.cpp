#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct student {
        string name ;
        int age;
        string batch;
    };
struct college {
    string name;
    string code;
    student s[3] ;
};
int main() {
    college c[2] ;
        c[0].name = "NIT MEGHALAYA";
        c[0].code = "MAN345";
        c[1].name = "NIT MIZORAM";
        c[1].code = "MEN543";
        c[0].s[2].name = "Vishnu kant rai";
        c[0].s[2].age = 19;
        c[0].s[2].batch = "B.Tech 25";
        c[0].s[1].name = "Ruhul amin";
        c[0].s[1].age = 19;
        c[0].s[1].batch = "B.Tech 25";
        c[0].s[0].name = "MANISH CHAUHAN";
        c[0].s[0].age = 19;
        c[0].s[0].batch = "B.Tech 25";
        c[1].s[0].name = "XYZ";
        c[1].s[0].age = 27;
        c[1].s[0].batch = "MSC";
        c[1].s[1].name = "ABC";
        c[1].s[1].age = 26;
        c[1].s[1].batch = "MSC";
        c[1].s[2].name = "MNO";
        c[1].s[2].age = 25;
        c[1].s[2].batch = "MSC";

for (int i = 0 ; i < 2 ; i++){
    for (int j = 0 ; j <3 ; j++){
    cout << "Collage name : "<< c[i].name << endl;
    cout << "Collage code : "<< c[i].code << endl;
    cout << "Student name : "<< c[i].s[j].name << endl;
    cout << "Student age : "<< c[i].s[j].age << endl;
    cout << "Student batch : "<< c[i].s[j].batch << endl;
    cout <<"-------------------------------------------"<<endl;
    }
    cout <<"-----------------------------------------------"<<endl;
    cout <<"-----------------------------------------------"<<endl;

}
 return 0;
}