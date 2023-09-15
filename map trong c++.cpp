#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string input = "122344";
    map<char, int> charCount; //ham map luu tru bien dang value - key
    // vd:    value - key : 1 - charCount[1];
    // khoi tao value-key vao map: charCount[1]=999; ta co cap value-key: (1 - 999)
    // in ra key cua value 1: cout << charCount[1];


    // Đếm số lần xuất hiện của mỗi ký tự
    // Tang key len 1 neu trung lap;
    // Luc dau key chua duoc tao -> tat ca = 0;
    // Duyet qua 1, truyen 1 vao c, charCount[c=1] = 0 + 1= 1 ;
    // Duyet qua 2, truyen 2 vao c, charCount[c=2] = 0 + 1= 1 ;
    // Duyet qua 2 bi lap, truyen 2 vao c, charCount[c=2] = 1 + 1= 2 ;
    // Ta thay so key tuong ung voi so lan xuat hien
    for (char c : input) {
        charCount[c]++;
    }

    // In ra các ký tự không lặp
    for (const auto &pair : charCount) {
        if (pair.second == 1) {
            cout << pair.first << " ";
        }
    }


    // insert(): Chèn một cặp key-value vào map.
    // map<int, string> myMap;
    // myMap.insert(pair<int, string>(1, "Alice"));


    // emplace(): Chèn một cặp key-value vào map bằng cách tạo đối tượng key-value ngay tại chỗ.
    // map<int, string> myMap;
    // myMap.emplace(1, "Alice");


    // erase(): Xóa một phần tử khỏi map dựa trên key hoặc iterator.
    // myMap.erase(1); // Xóa phần tử có key là 1


    // find(): Tìm một phần tử trong map dựa trên key và trả về iterator đến nó. Nếu không tìm thấy, trả về iterator cuối cùng của map.
    // auto it = myMap.find(1);
    // if (it != myMap.end()) {
    //     // Tìm thấy phần tử
    // } else {
    //     // Không tìm thấy phần tử
    // }


    // count(): Đếm số lần một key xuất hiện trong map.
    // int count = myMap.count(1); // Đếm số lần key 1 xuất hiện


    // size(): Trả về số lượng phần tử trong map.
    // int size = myMap.size(); // Số lượng phần tử trong map


    // clear(): Xóa tất cả các phần tử trong map.
    // myMap.clear(); // Xóa tất cả phần tử


    // begin() và end(): Trả về iterator đến phần tử đầu tiên và sau cùng của map.
    // auto it_begin = myMap.begin(); // Iterator đến phần tử đầu tiên
    // auto it_end = myMap.end();     // Iterator sau cùng


    // empty(): Kiểm tra xem map có rỗng hay không.
    // bool isEmpty = myMap.empty(); // Kiểm tra xem map có rỗng hay không


    // operator[]: Truy xuất giá trị theo key và cũng cho phép bạn gán giá trị cho key nếu key chưa tồn tại.
    // myMap[1] = "Alice";     // Truy xuất và gán giá trị cho key 1
    // string value = myMap[1]; // Truy xuất giá trị của key 1

    return 0;
}
