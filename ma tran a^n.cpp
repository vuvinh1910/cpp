#include <iostream>
#include <vector>

using namespace std;

// Hàm nhân hai ma trận
vector<vector<long long>> multiplyMatrices(const vector<vector<long long>>& a, const vector<vector<long long>>& b, long long mod) {
    long long rows_a = a.size();
    long long cols_a = a[0].size();
    long long cols_b = b[0].size();

    vector<vector<long long>> result(rows_a, vector<long long>(cols_b, 0));

    for (long long i = 0; i < rows_a; ++i) {
        for (long long j = 0; j < cols_b; ++j) {
            for (long long k = 0; k < cols_a; ++k) {
                result[i][j] = (result[i][j] + ((a[i][k] % mod) * (b[k][j] % mod)) % mod) % mod;
            }
        }
    }

    return result;
}

// Hàm chia để trị để tính lũy thừa ma trận
vector<vector<long long>> matrixPower(const vector<vector<long long>>& matrix, int power, long long mod) {
    if(power==1) return matrix;
    vector<vector<long long>> s=matrixPower(matrix,power/2,mod);
    if(power%2==0) return multiplyMatrices(s,s,mod);
    else return multiplyMatrices(multiplyMatrices(s,s,mod),matrix,mod);
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
