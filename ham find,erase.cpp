#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string s2;
    cin >> s2;
    cout << s.find(s2); // tra ve vi tri s2 xuat hien trong s
    // vd: s: 12345
    // s2: 3
    // s.find(s2) = 2

    // ham xoa
    int t1;cin>>t1;
    s.erase(s.begin() + t1); // Xóa phần tử tại vị trí t1
    s.erase(s.find(s2),s2.length()+1); // vi tri xoa, do dai xoa bat dau tu vi tri xoa
}
