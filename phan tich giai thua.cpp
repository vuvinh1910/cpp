#include <bits/stdc++.h>
using namespace std;




int main (){
    int t;cin>>t;
    while (t--)
    {
        int a;cin >> a;
        char b;
        map<char,int>masp;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            if(b=='1') continue;
            if(b=='2' || b=='3' || b=='5' || b=='7'){
                masp[b-'0']++;
            }
            if(b=='4') {masp[3]++;masp[2]+=2;}
            if(b=='6') {masp[5]++;masp[3]++;}
            if(b=='8') {masp[7]++;masp[2]+=3;}
            if(b=='9') {masp[7]++;masp[3]+=2;masp[2]++;}
        }
        
        for (int i = 9; i > 1; i--)
        {
            while (masp[i]>0)
            {
                cout<< i;
                masp[i]--;
            }
            
        }
        
        
        cout << endl;
    }
    
}
