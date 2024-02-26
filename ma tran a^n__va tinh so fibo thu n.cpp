#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
long long m = 1000000007;


// hàm nhân 2 ma trận
vector<vector<long long>> nhanmatran(const vector<vector<long long>>&a,const vector<vector<long long>>&b){
    vector<vector<long long>> kq(2,vector<long long>(2));
    for (long long i = 0; i < 2; i++)
    {
        for (long long j = 0; j < 2; j++)
        {
            kq[i][j]=0;
            for (long long k = 0; k < 2; k++)
            {
                kq[i][j] =( kq[i][j]%m + ( a[i][k]%m * b[k][j]%m ) % m ) % m;
            }
        }
    }
    return kq;
}

// hàm lũy thừa 2 ma trận dùng thuật toán chia để trị
vector<vector<long long>> pow_matrix(vector<vector<long long>> a,long long pow){
    if(pow==1) return a;
    vector<vector<long long>> s = pow_matrix(a,pow/2);
    if(pow%2==0) return nhanmatran(s,s);
    else return nhanmatran(nhanmatran(s,s),a);
}

 // nếu lũy thừa ma trận :
 //    1 1
 //    1 0
 // lên n lần thì ta có thể liên hệ với số fibo thứ n như sau:
 //     f(n+1) f(n)
 //     f(n)   f(n-1)

int main(){

    long long t;
    cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        if(n==0) { 
            cout << "0\n";
        } else {
            vector<vector<long long>> a(2,vector<long long>(2));
            a =  {{1,1},
                 {1,0}};
            vector<vector<long long>> test = pow_matrix(a,n);
            cout << test[0][1] << endl;
        }
    }
}
