#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    static int mnv; // khai báo biến tĩnh mnv kiểu int trong struct
    string name;
};

int NhanVien::mnv = 1; // khởi tạo giá trị của biến tĩnh ngoài hàm struct, sẽ bị lỗi nếu cố khởi tạo giá trị bên trong struct
// Để truy cập biến tĩnh trong một lớp (class) hoặc cấu trúc (struct), bạn phải sử dụng toán tử phạm vi (::)


void biencucbo(){
    int a=5;
} // sau khi hết hàm thì a sẽ biến mất, a là biến cục bộ trong hàm biencucbo


int bientoancuc = 0; // Các biến khai báo bên ngoài của khối lệnh được gọi là biến toàn cục.
// biến toàn cục có thời gian tĩnh, nghĩa là chúng được tạo ra khi chương trình bắt đầu và bị hủy khi nó kết thúc

int main() {

    cout << ++NhanVien::mnv << endl; // in ra 2
    cout << ++NhanVien::mnv << endl; // in ra 3
    // giá trị biến tĩnh mnv thay đổi không bị đặt lại

    return 0;
}
