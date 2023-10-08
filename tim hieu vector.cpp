#include <iostream>
#include <vector>
using namespace std;

void in(vector<int>& b){    // truyen vector vao ham, tham chieu
    for(int i=0;i<b.size();i++){
        cout << b[i];
    }
}

int main() {
    vector<int> numbers; // Khai báo một vector kiểu int

    int b = 5;
    vector<int> num2(b); // Khai báo vector c với kích thước 5

    vector<int> rowSum(N, 0);
    //Dòng mã vector<int> rowSum(N, 0); tạo một vector rowSum có kích thước là N và tất cả các phần tử trong vector được khởi tạo với giá trị 0.


    numbers.push_back(1);    // Thêm phần tử vào cuối vector
    numbers.push_back(2);
    numbers.push_back(3);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " "; // In ra các phần tử của vector
    }  // 1 2 3 
    cout << endl;

    // Sử dụng vòng lặp dựa trên dải C++11
    for (const auto &num : numbers) {
        std::cout << num << " "; // 1 2 3
    }
    std::cout << std::endl;

    return 0;
}
