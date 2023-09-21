#include <bits/stdc++.h>
using namespace std;

// biến toàn cục nên đc khai báo đầu chương trình
int bientoancuc = 0; // Các biến khai báo bên ngoài của khối lệnh được gọi là biến toàn cục.
// biến toàn cục có thời gian tĩnh, nghĩa là chúng được tạo ra khi chương trình bắt đầu và bị hủy khi nó kết thúc

void sett(){
    bientoancuc = 100; // có thể đổi giá trị biến toàn cục bằng hàm
}


struct NhanVien {
    static int mnv; // khai báo biến tĩnh mnv kiểu int trong struct
    string name;
};
int NhanVien::mnv = 1; // khởi tạo giá trị của biến tĩnh ngoài hàm struct, sẽ bị lỗi nếu cố khởi tạo giá trị bên trong struct
// vì Biến tĩnh (static) không thuộc về một đối tượng cụ thể mà thuộc về toàn bộ lớp hoặc struct đó
//. Do đó, bạn phải khai báo biến tĩnh bên ngoài cấu trúc hoặc lớp.
// Để truy cập biến tĩnh trong một lớp (class) hoặc cấu trúc (struct), bạn phải sử dụng toán tử phạm vi (::)


void biencucbo(){
    int a=5;
} // sau khi hết hàm thì a sẽ biến mất, a là biến cục bộ trong hàm biencucbo


int main() {
    cout << bientoancuc << endl;

    cout << ++NhanVien::mnv << endl; // in ra 2
    cout << ++NhanVien::mnv << endl; // in ra 3
    //Biến tĩnh (static variables) là loại biến lưỡng tính, vừa có tính chất của 1 biến toàn cục (global variables)
    // , vừa mang tính chất của 1 biến cục bộ (local variables):
    // Tính chất của biến toàn cục: biến không mất đi khi khối lệnh định nghĩa nó kết thúc, nó vẫn nằm trong vùng nhớ
    // của chương trình và được tự động cập nhật khi khối lệnh đó được gọi lại.
    // Tính chất của biến cục bộ: biến chỉ có thể được sử dụng trong khối lệnh mà nó được khai báo.

    return 0;
}
