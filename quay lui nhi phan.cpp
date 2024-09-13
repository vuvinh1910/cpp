#include<bits/stdc++.h>
using namespace std;

void Nhiphan(int n, string s){
    if(n==0){
        cout << s << endl;
        return;
    }
    Nhiphan(n-1,s+"0");
    Nhiphan(n-1,s+"1");
}

int main(){
    int t;cin >> t;
   Nhiphan(t,"");
}
