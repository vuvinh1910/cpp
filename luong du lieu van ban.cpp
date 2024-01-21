// Cho luồng dữ liệu văn bản, đọc luồng dữ liệu đó.
// văn bản có thể có nhiều dòng.
// vd: "asd
//      123".
// nếu dùng getline 1 lần sẽ bị lỗi vì chỉ đọc đc 1 dòng khi nhấn enter.
// dùng thêm vòng lặp while để đọc toàn bộ văn bản.

#include<bits/stdc++.h>

using namespace std;

int main() {
  long long max_num = 0;
  string num;
  //getline(cin,num); // đọc 1 dòng
   while (getline(cin,num)) // đọc cho đến dòng cuối cùng của văn bản đầu vào.
  {
    stringstream ss(num);
    long long m;
        while (ss >> m)
        {
            max_num=max(max_num,m);  // tìm số lớn nhất trong văn bản đọc vào
        }
        
  }

  cout << max_num << endl; //in
  return 0;
}
