#include<bits/stdc++.h>
using namespace std;

struct sinhvien{ // khai báo sinhvien kiểu struct
  string hoten; // các thành phần trong sinhvien
  int tuoi;
};

void nhap( sinhvien& A ){  // hàm nhập tên và tuổi sinh viên, ex về việc truyền struct vào hàm, dấu & là tham chiếu;
  cin >> A.hoten >> A.tuoi;  // dùng . truy cấp trực tiếp vào đối tượng trong sinhvien
}

void nhap2( sinhvien* A){ // cách truyền struct vào hàm bằng con 
  cin >> A->hoten >> A->tuoi; // lưu ý khi truyền con trỏ ta dùng -> để truy cập đối tượng qua con trỏ
}

int main(){
  // khai báo A kiểu struct sinh viên
  sinhvien a;
  // nhap ho ten va tuoi
  cin >> a.hoten >> a.tuoi;

  // nếu muốn khai báo mảng gồm nhiều sinh viên bộ nhớ động
  sinhvien *ptrsinhvien = new sinhvien[100]; // con trỏ ptr trỏ đến sinhvien, mảng gồm 100 sinhvien
                                             // hàm new cấp phát bộ nhớ động
  delete[] ptrsinhvien;                      // có thể xóa nếu kết thúc chương trình giúp tiết kiệm bộ nhớ
  
  // khai báo mảng sinhvien bộ nhớ tĩnh(tốn dung lượng, ko xóa được khi kết thúc)
  sinhvien a[100];

  //dùng hàm nhập sinhvien
  nhap(a); nhap2(&a);

  
}
