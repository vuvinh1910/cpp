#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cout << setfill('0') << setw(5) << t << endl; // in ra 00001
    cout << 1.0*t // ép kiểu ngầm định thành float;
    cout << fixed << setprecision(2) << t*1.0 << endl;
    return 0;
}
