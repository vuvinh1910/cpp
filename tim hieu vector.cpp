#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; // Khai báo một vector kiểu int

    int b = 5;
    vector<int> num2(b); // Khai báo vector c với kích thước 5


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
