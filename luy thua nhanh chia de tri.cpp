// Cho số nguyên dương N và K. Hãy tính N^K modulo 10^9+7.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 10^9).


#include <iostream>

using namespace std;

long long pow_mod(long long a, long long b, long long m) {
    if(b==0) return 1;
    if(b==1) return a%m;
    long long r = pow_mod(a,b/2,m);
    if(b%2==0) return (r%m*r%m)%m;
    return (r%m*r%m * a%m)%m
}

// ý tưởng:
    // bình phương và nhân để tính lũy thừa nhanh.
    // f(k)=(x^y)^2 nếu k=2y;
    // f(k)=(x^y)^2* nếu k=2y+1;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << pow_mod(n, k, 1000000007) << endl;
    }
    return 0;
}
