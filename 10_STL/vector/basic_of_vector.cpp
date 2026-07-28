// SYNTEX For declaration---> vector<data_type> vector_name; 
//name.push_back() --> for Add a element in vector
//name.size() ---> give length of vector
//capacity of  a vector is not the size of vector 
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    vector<int> num;
    num.push_back(10);
    num.push_back(11);
    num.push_back(12);
    num.push_back(13);
    num.push_back(11);
    num[4] = 8;
    num.push_back(69);
    for (int i = 0 ; i < num.size(); i++){
        cout << num[i] << " ";
    }
    cout <<endl;
    cout<<"size of vector : "<<num.size();
 return 0;
}