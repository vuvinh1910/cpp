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
    string sss= ss.str();
    cout << sss; // in ra theo thu tu ghi 42100999

    return 0;
}
