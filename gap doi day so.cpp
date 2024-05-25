#include <bits/stdc++.h>

using namespace std;
//kq = vị trí đầu tiên của bit 1 khi đổi k sang nhị phân
#define                     ll long long
#define faster()            cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()               int t; cin >> t; while (t--)

ll Load(ll k, ll x) {
	if (k % 2 == 1)return x;
	else return Load(k / 2, x + 1);
}

int main() {
	faster();
	run() {
		ll n, k; cin >> n >> k;
		cout << Load(k, 1) << endl;
	}
}
