#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){  // hàm tìm ucln
    if(b==0) return a;
    return gcd(b,a%b);
}

class PhanSo {
public:
    long long a, b;

    // định nghĩa hàm gán giá trị các biến trong class phân số
    PhanSo (){};
    PhanSo(long long a, long long b){
        this->a = a;
        this->b = b;
    }

    friend istream& operator>>(istream& is, PhanSo& a) {  // hàm nhập, bắt buộc phải là friend của class, tham chiếu giúp ghi lại giá trị
        is >> a.a >> a.b;				  // istream khai báo is giống như cin
        return is;					  // trả về hàm nhập
    }

    // hàm cộng 2 class phân số, ở đây tương tự là PhanSo + Phanso
    PhanSo operator+(PhanSo& other){		
        PhanSo result;
        result.a = this->a * other.b + other.a * this->b;
        result.b = this->b * other.b;
        long long g=gcd(result.a,result.b);
        result.a=result.a/g;
        result.b=result.b/g;
        return result;
    }
    // hoặc có thể dùng hàm sau gọn hơn khi đã định nghĩa hàm gán biến
    PhanSo operator+(PhanSo& other){
        long long u = gcd(this->a * other.b + other.a * this->b, this->b * other.b);
        return PhanSo((this->a * other.b + other.a * this->b) / u, (this->b * other.b) / u);
    }

    friend ostream& operator << (ostream& is ,const PhanSo& c){ // tương tự hàm nhập thì đây là hàm xuất
        is << c.a << '/' << c.b;				// bạn phải khai báo const PhanSo c trong bài toán này nếu không sẽ bị lỗi
        return is;  // trả về hàm xuất				// vì đây là cout << p + q nên cần tham chiếu hằng để tránh xung đột vs hàm cộng
    }

};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
