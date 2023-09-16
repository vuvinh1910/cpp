#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;cin >> a>>b;
    int so=0;
    stringstream ss;
    stringstream ss2;
    int c=b;
    while(c>0){
        c=c-9;
        so++;
    }

    int lan=0;
    if(b<=9*a && b>0)
    {
    for (int i = 0; i < a; i++)
    {
        if(b-9>0){
            ss << 9;
            ss2 << 9;
            b=b-9;
            lan++;
        } else {
            if(lan==a-1){
                if(b>0){ss << b; ss2 << b;} 
                else{ ss << 1; ss2 << 0;}
            } else {
                if(b>0)
                {ss << b-1;
                 ss2 << b;
                lan++;
                b=b-9;} else {
                    ss << 0;
                    ss2 << 0;
                    lan++;
                }
            }
        }
    }
    string res = ss.str();
    string res2 = ss2.str();
    reverse(res.begin(),res.end());
    cout << res << " " << res2 <<endl;;
    } else {cout << -1 << " "<< -1 << endl;;}
    
    return 0;
}
