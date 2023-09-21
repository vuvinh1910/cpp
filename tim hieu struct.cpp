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


sinhvien sinhvienmoi(sinhvien& a){ // gọi hàm trả vể kiểu struct sinh viên
  sinhvien c;  // gọi hàm con sinh viên con trong hàm này để trả về
  c.hoten = "vinh";
  c.tuoi = 2*a.tuoi;
  return c; // return kiểu sinhvien (trả về)
}


//truyền mảng struct sinhvien vào hàm (mảng này được tạo bởi new bộ nhớ động,con trỏ)
void indanhsach(sinhvien* danhsach,int soluong){
  for(int i=0;i<soluong;i++){
      cout << ....;
  }
}  // muốn dùng hàm hãy gọi: indanhsach( ptrsinhvien, 100); trong main




//truyền mảng struct sinhvien vào hàm (mảng này được tạo bởi bộ nhớ tĩnh)
void indanhsach2(sinhvien danhsach[],int soluong){
  for(int i=0;i<soluong;i++){
      cout << ....;
  }
}  // muốn dùng hàm hãy gọi: indanhsach( staticsinhvien, 100); trong main



int main(){
  // khai báo A kiểu struct sinh viên
  sinhvien a;
  // nhap ho ten va tuoi
  cin >> a.hoten >> a.tuoi;
  //in ra thông tin sinhvien
  cout << a.hoten << " " << a.tuoi ;
  

  // nếu muốn khai báo mảng gồm nhiều sinh viên bộ nhớ động
  sinhvien *ptrsinhvien = new sinhvien[100]; // con trỏ ptr trỏ đến sinhvien, mảng gồm 100 sinhvien
  // hàm new cấp phát bộ nhớ động
  // cách gọi: ptrsinhvien[i].name,... gọi tên sinh viên thứ i
  delete[] ptrsinhvien; // có thể xóa bất kì lúc nào giúp tiết kiệm bộ nhớ

  
  // khai báo mảng sinhvien bộ nhớ tĩnh(tốn dung lượng, ko xóa được khi muốn xóa, chỉ bị xóa khi kết thúc ct)
  sinhvien staticsinhvien[100];

  
  //dùng hàm nhập sinhvien
  nhap(a); nhap2(&a);
  

  //hàm tạo sinhvien mới bằng cách gọi hàm con
  sinhvien c = sinhvienmoi(a)  // tạo sinhvien c tên vinh và gấp đôi tuổi sinh viên a


   
}
