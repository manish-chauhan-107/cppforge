//This file will cover the most commonly used vector member functions
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
// Name.push_back()  ---> use to add a element at the end of vector
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(16);
    cout<<"vector : ";
     for (int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<endl;
// name.pop_back() --> Removes the last element.
    v.pop_back();
// name.size --> give no of element 
    cout <<"size after remove last element : "<< v.size()<< endl;
// name.empty() --> check weather vector is empty or not.
    if(v.empty())
    {
        cout << "Vector is empty"<<endl;
    }
    else
    {
        cout << "Vector is not empty"<<endl;
    }
//name.front() --> Returns the first element.
    cout << v.front() <<endl;
//name.back() -- > give the last element of vector
    cout <<v.back()<<endl;
//name.at() --> Accesses an element like an array but performs bounds checking.
    cout<<v.at(1)<<endl;
 return 0;
}