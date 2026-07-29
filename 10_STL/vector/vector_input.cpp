#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {   
        cout <<"enter "<<i+1 << " element : ";
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector : ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

 return 0;
}