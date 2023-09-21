#include <bits/stdc++.h>
using namespace std;

class MyClass {
public: // Phạm vi truy cập public,
        // Các thành phần được khai báo trong phạm vi public có thể truy cập từ bên ngoài class và các đối tượng class

    int publicVar; // Biến thành viên public

    void publicFunction() { // Hàm thành viên public
        // Có thể truy cập các thành phần khác trong class
        privateFunction(); // truy cập được hàm trong private vì private có thể được truy cập trong class
    }

private: // Phạm vi truy cập private,
         // Các thành phần được khai báo trong phạm vi private không thể truy cập từ bên ngoài class và các đối tượng của class

    int privateVar; // Biến thành viên private

    void privateFunction() { // Hàm thành viên private
        // Có thể truy cập thành phần khác trong cùng class
        publicVar= 10;
    }
};

int main() {
    MyClass obj;  //obj là đối tượng của class MyClass
  
    obj.publicFunction(); // Có thể gọi hàm thành viên publicFunction vì nó public
    cout << obj.publicVar; // in ra giá trị publicVar

    // Không thể truy cập obj.privateVar và obj.privateFunction từ bên ngoài class vì đó là private
    return 0;
}
