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
    cout << num2 << endl; // output 42
    ss2 >> num2;
    cout << num2; // output 3.14


    
    
    // ghi vao stringstream
    int a = 42;
    int b = 100;
    int c = 999;
    stringstream ss;
    ss<<a;        // cách này chỉ dùng nếu bạn muốn xuất ra kiểu xâu kí tự
    ss<<b;
    ss<<c;
    string sss= ss.str(); // ham str cho phep truy cap vao du lieu trong stream
    cout << sss; // in ra theo thu tu ghi 42100999
    

    // nếu muốn ghi từng số riêng biệt như 42 100 999 (int)
    // thì khi ghi vào stringstream hãy thêm khoảng trống
    // vì stringstream phân biệt các từ bằng khoảng trống
    // ví dụ:
    stringstream ss2;
    ss<<a<<" ";
    ss<<b<<" ";         // nó sẽ phân biệt từng số a,b,c
    ss<<c<<" ";         // ta có thể dễ dàng in ra từng số
    int num;            // nếu không có khoảng trắng để phân biệt
    while(ss>>num){     // sẽ gây lỗi khi muốn tương tác với từng giá trị
        cout << num;
    }



    

    // ham stringstream co the chuyen doi string thanh int va nguoc lai. vd:
    // string=12 -> stringstream -> int=12
    // int=123 -> stringstream -> string=123
    // thay doi tuy thuoc vao kieu du lieu cua c
    string b;
    getline(cin,b); // nhap 123 456 kieu string co dau cach phan biet 123 va 456
    stringstream ss(b);
    int c;  // kieu du lieu int
    while (ss >> c)
    {
        cout << c << " "; // int ra 123 456 kieu int
    }

    return 0;
}
