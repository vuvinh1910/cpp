// Cho hai mảng đã được sắp xếp A[] và B[] gồm N và N-1 phần tử. Các phần tử của mảng A[] chỉ khác mảng B[] một phần tử duy nhất. Hãy tìm vị trí của phần tử khác nhau giữa A[] và B[].

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số N; dòng tiếp theo đưa vào N số của mảng A[];dòng tiếp theo đưa vào N-1 số của mảng B[]; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤107; 0≤ A[i]≤1018.

#include <bits/stdc++.h>

using namespace std;

int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n - 1);
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n - 1; i++) cin >> b[i];

    long long low = 0, high = n - 1;
    while (low <= high) {
      long long mid = (low + high) / 2;
      if (a[mid] == b[mid]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    cout << low+1 << endl;
  }

  return 0;
}
