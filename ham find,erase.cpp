#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string s2;
    cin >> s2;
    cout << s.find(s2); // tra ve vi tri s2 xuat hien trong s
    // neu khong thay xuat hien, ham find se tra ve string::npos
    // vd: s: 12345
    // s2: 3
    // s.find(s2) = 2

    // tim vi tri s2 xuat hien lan thu 2
    int t=s.find(s2); // vi tri dau tien s2 xuat hien
    if(s.find(s2,t+1)!=string::npos) // kiem tra xem co tim thay s2 xuat hien lan 2 khong
    {cout << s.find(s2,t+1);} // tra ve vi tri s2 xuat hien lan 2
    

    // ham xoa
    int t1;cin>>t1;
    s.erase(s.begin() + t1); // Xóa phần tử tại vị trí t1
    s.erase(s.find(s2),s2.length()+1); // vi tri xoa, do dai xoa bat dau tu vi tri xoa

    // xoa het cac phan tu trong xau giong voi s2
    while(s.find(s2)!= string::npos){
        s.erase(s.find(s2),s2.length()+1);
    }
}
