#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> c;
      
        c.resize(b); // Cấp phát bộ nhớ cho vector
                     // có thể dùng nhanh  vector<int> c(b);

        for (int i = 0; i < b; i++) { // nếu không cấp phát bộ nhớ
                                      // thì vòng lặp for sẽ bị sai,vì vector
                                      // c chưa rõ ràng ở mảng i
            cin >> c[i];

          
        }

        sort(c.begin(), c.end());
        int count = 0;

        for (int i = 0; i < b - 1; i++) {
            if (c[i + 1] - c[i] > 1) {
                count += c[i + 1] - c[i] - 1;
            }
        }

        cout << count << endl;
    }
    return 0;
}
