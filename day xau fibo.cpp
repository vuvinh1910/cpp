// Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất:
// G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1).
// Với phép cộng (+) là phép nối hai xâu với nhau.  Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.

#include <bits/stdc++.h>

using namespace std;

#define                     ll long long
#define faster()            cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()               int t; cin >> t; while (t--)

ll f[100];

char Load(ll n, ll k) {
	if (n == 1)return 'A';
	if (n == 2)return 'B';
	if (k <= f[n - 2])return Load(n - 2, k);
	else return Load(n - 1, k - f[n - 2]);
}

int main() {
	faster();
	f[1] = f[2] = 1;
	for(int i=3;i<=93;i++) f[i] = f[i - 1] + f[i - 2];
	run() {
		ll n, k; cin >> n >> k;
		cout << Load(n, k) << endl;
	}
}

// a b ab bab abbab bababbab
// ta thấy f[n] là độ dài xâu fibo thứ n
// nếu k <= f[n-2] thì tìm trong xâu trước của xâu thứ n-2.
// nếu k > f[n-2] thì tìm trong xâu n-1 với độ dài k-f[n-2].
