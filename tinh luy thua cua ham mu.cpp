#include <bits/stdc++.h>
using namespace std;

// Cho ba số nguyên dương x, y, p. Nhiệm vụ của bạn là tính (x*y) %p.
// thuật toán giúp tiết kiệm tgian, chống tràn số khi lũy thừa > 10^18
int main (){
    int t;cin>>t;
    while (t--)
    {
        long long x,y,z;
        cin >> x >> y >> z;
      
        long long temp=x;
        for (int i = 0; i < y-1; i++)
        {
            x = (x * temp) % z;
        }
      
        long long u=x%z;
      
        cout << u;
        cout << endl;
    }
    
}
