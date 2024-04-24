// Cho dãy số A[] gồm có N phần tử.

// Nhiệm vụ của bạn là hãy đếm số bộ ba (i, j, k) mà A[i] + A[j] + A[k] < K cho trước.

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long count = 0;
        for (long long i = 0; i < n - 2; i++) {
            long long left = i + 1;
            long long right = n - 1;
            while (left < right) {
                if (a[i] + a[left] + a[right] < k) {
                    count += right - left;
                    left++;
                } else {
                    right--;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
