#include <bits/stdc++.h>
using namespace std;

int main() {
    string d, a;

    // Đọc chuỗi d từ đầu vào
    getline(cin, d);

    // Đọc chuỗi a từ đầu vào
    getline(cin, a);

    stringstream ss(d);// hàm này đọc dữ liệu trong xâu bỏ qua khoảng trống
    //đọc/ghi theo thứ tự từ đầu->cuối và lưu dữ liệu theo thứ tự
    
    string word;
    string test = "";

    // Đọc từng từ từ chuỗi d và kiểm tra nếu từ đó khác với chuỗi a thì thêm vào chuỗi test
    // dấu >> là phép input đầu vào, ở đây chuyển ss vào word
    while (ss >> word) { // vòng lặp sẽ lặp đến khi chuyển hết từ vào word
                         // word sẽ được gán mới mỗi lần lặp,nếu muốn lưu hết xâu hãy dùng mảng word[i++]
        if (word != a) {
            test += word + " "; // Thêm từ và một khoảng trắng sau mỗi từ
        }
    }

    cout << test << endl;
    return 0;
}
