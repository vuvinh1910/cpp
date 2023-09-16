#include <bits/stdc++.h>
using namespace std;

int main() {
    string data = "42 3.14 Hello";
    stringstream ss(data); // đọc dữ liệu từ data

    int num; float num2;
    double pi;
    string word;

    //ghi dữ liệu vào biến
    ss >> num >> pi >> word; // 42-3.14-Hello

    // thay đổi thứ tự kiểu biến
    ss >> pi >> num >> word; // 42-3-Hello
    
    // mỗi khi ghi 1 dữ liệu trong stringstream thì dữ liệu
    // đã ghi sẽ không được ghi trong lần tiếp theo (không phải xóa luôn cái đã ghi
    // mà nó chỉ nối tiếp dữ liệu ở sau)

    stringstream ss2(data);
    ss2 >> num2;
    cout << num2 << endl;;
    ss2 >> num2;
    cout << num2;

    // ghi vao stringstream
    int a = 42;
    int b = 100;
    int c = 999;
    stringstream ss;
    ss<<a;
    ss<<b;
    ss<<c;
    string sss= ss.str(); // ham str cho phep truy cap vao du lieu trong stream
    cout << sss; // in ra theo thu tu ghi 42100999

    

    // ham stringstream co the chuyen doi string thanh int va nguoc lai. vd:
    // string=12 -> stringstream -> int=12
    // int=123 -> stringstream -> string=123
    // thay doi tuy thuoc vao kieu du lieu cua c
    string b;
    getline(cin,b); // nhap 123 kieu string
    stringstream ss(b);
    int c;  // kieu du lieu int
    while (ss >> c)
    {
        cout << c << endl; // int ra 123 kieu int
    }

    return 0;
}
