#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
long long m = 1000000007;

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

vector<vector<long long>> pow_matrix(vector<vector<long long>> a,long long pow){
    if(pow==1) return a;
    vector<vector<long long>> s = pow_matrix(a,pow/2);
    if(pow%2==0) return nhanmatran(s,s);
    else return nhanmatran(nhanmatran(s,s),a);
}


int main() {
    // int t;cin>>t;
    // long long mod = 1000000007;
    // while (t--)
    // {
    //     int n;
    //     int k;
    //     cin>>n>>k;
    //     vector<vector<long long>> a(n,vector<long long>(n));
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cin>>a[i][j];
    //         }
    //     }
    //     vector<vector<long long>> result = matrixPower(a, k, mod);

    //     long long e=0;
    //     for (int i = 0; i < n; i++)
    //     {
    //       e+=result[i][n-1];
    //     }
    //     cout << e%mod << endl;
        
    // }
    long long n = 5;  // Số mũ
    long long mod = 1000000007;  // Modulo để tránh số tràn

    // Ma trận A (ví dụ)
    vector<vector<long long>> A = {{1, 1},
                             {1,0},
                             };

    // Tính A^n
    vector<vector<long long>> result = matrixPower(A, n, mod);

    // In ra kết quả
    for (const auto& row : result) {
        for (long long num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
