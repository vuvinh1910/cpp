#include <bits/stdc++.h>
using namespace std;
void set(const int &a){ //const là hằng số giúp ta giữ nguyên giá trị a không thay đổi
  a=100;
}

void (auto &a){ // hàm auto giúp ta tự động xác định kiểu của a(int)
  a=100;
}

int main(){
    new int a=10;
    set(a); // thử thay đổi a;
    cout << a ; // a vẫn 10;


    // cấp phát bộ nhớ động
    int *b=new int; //khai báo con trỏ b để lưu địa chỉ biến động
    *b=10;          // gán giá trị con trỏ b là 10
    delete b;       // sau khi xóa thì con trỏ sẽ trở thành con trỏ treo lơ lửng
}

