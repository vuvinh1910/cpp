#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Khởi tạo stringstream
    std::stringstream ss;

    // Duyệt qua vector và đưa từng phần tử vào stringstream
    for (const int &num : numbers) {
        ss << num << " ";
    }

    // Bây giờ ss chứa dãy số đã được đưa vào
    std::string result = ss.str();

    std::cout << result << std::endl;

    return 0;
}
