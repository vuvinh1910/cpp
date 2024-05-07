// lower_bound:
// lower_bound trả về iterator tới phần tử đầu tiên trong dãy có giá trị không nhỏ hơn giá trị đã cho.
// Nếu không có phần tử nào trong dãy có giá trị lớn hơn hoặc bằng giá trị đã cho, nó trả về iterator tới phần tử cuối cùng trong dãy.
// Nếu dãy không được sắp xếp, kết quả của lower_bound có thể không chính xác.
// upper_bound:
// upper_bound trả về iterator tới phần tử đầu tiên trong dãy có giá trị lớn hơn giá trị đã cho.
// Nếu không có phần tử nào trong dãy có giá trị lớn hơn giá trị đã cho, nó trả về iterator tới phần tử cuối cùng trong dãy.
// Tương tự như lower_bound, kết quả của upper_bound chỉ đúng khi dãy đã được sắp xếp.
// Ví dụ minh họa:

// Giả sử có một vector đã được sắp xếp như sau: {10, 20, 30, 30, 40, 50}.

// lower_bound(30) sẽ trả về iterator tới phần tử thứ 3 trong dãy (giá trị 30).
// upper_bound(30) sẽ trả về iterator tới phần tử thứ 5 trong dãy (giá trị 40).
// Về mặt sắp xếp, lower_bound cho chúng ta "giới hạn dưới" của giá trị cần tìm trong dãy, trong khi upper_bound cho chúng ta "giới hạn trên".


int main() {
    std::vector<int> v = {10, 20, 30, 30, 40, 50};

    // Tìm lower_bound của giá trị 30
    std::vector<int>::iterator lower = std::lower_bound(v.begin(), v.end(), 30);
    if (lower != v.end()) {
        std::cout << "lower_bound(30) trả về giá trị: " << *lower << std::endl;
    } else {
        std::cout << "Không tìm thấy giá trị 30 trong dãy" << std::endl;
    }

    // Tìm upper_bound của giá trị 30
    std::vector<int>::iterator upper = std::upper_bound(v.begin(), v.end(), 30);
    if (upper != v.end()) {
        std::cout << "upper_bound(30) trả về giá trị: " << *upper << std::endl;
    } else {
        std::cout << "Không tìm thấy giá trị 30 trong dãy" << std::endl;
    }

    binary_search(a.begin(),a.end(),value);
    // true if can find
    // else false

    return 0;
}
