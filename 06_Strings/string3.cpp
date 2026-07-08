#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    string line;
    cout<<"Enter a line ";
    getline(cin , line);
    cout<< line.length();
    cout<<"\n";
    cout<<line.empty();   // provide 1 for true and 0 for false , we can also use it with condition statement
    cout<<"\n";
    string name = "Manish chauhan" ;
    string new1 = line.append(name);
    cout<<new1;
    cout<<"\n";
    string new2 = line + name ;
    cout<<"with concentenation answer is : "<<new2;
    cout<<"\n";
    cout<<line.compare(name);
 return 0;
}