#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cout << setfill('0') << setw(5) << t << endl; // in ra 00001

    // hàm setw và setfill có thể áp dụng cho chuỗi string, char
    string a = "1";
    cout << setfill('0') << setw(5) << a << endl; // in ra 00001

    
    cout << 1.0*t // ép kiểu ngầm định thành float;
        
    // in ra chữ số sau dấu ,
    cout << fixed << setprecision(2) << t*1.0 << endl; // in ra 1.00
    return 0;
}
