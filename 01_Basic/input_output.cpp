#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age;

    return 0;
}