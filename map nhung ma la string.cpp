#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    cin.ignore();
    string a[t];
    for (int i = 0; i < t; i++)
    {
        getline(cin,a[i]);
    }
    
    map<string,int>masp;

    for(string b : a){
        masp[b]++;
    }
    int count=0;
    for(const auto &pair : masp){
        if(pair.second!=0){
            count++;
        }
    }
    cout << count;
    
    return 0;
}
