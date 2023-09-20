#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    static int mnv; // khai báo biến tĩnh trong struct
    string name;
};

int NhanVien::mnv = 1; // khởi tạo giá trị của biến tĩnh ngoài hàm struct, sẽ bị lỗi nếu cố khởi tạo giá trị bên trong struct
// Để truy cập biến tĩnh trong một lớp (class) hoặc cấu trúc (struct), bạn phải sử dụng toán tử phạm vi (::).


void biencucbo(){
    int a=5;
} // sau khi hết hàm thì a sẽ biến mất

int main() {

    cout << ++NhanVien::mnv << endl; // in ra 2
    cout << ++NhanVien::mnv << endl; // in ra 3

    return 0;
}
