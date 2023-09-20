#include <bits/stdc++.h>

int main() {
    std::string str = "1235";
    char ch = '4';

    int position = 3;  // Vị trí muốn chèn ký tự '4' vào (vị trí 3 trong chuỗi).

    // Sử dụng hàm insert của std::string để chèn ký tự.
    str.insert(position, 1, ch);

    std::cout << str << std::endl;

    return 0;
}
