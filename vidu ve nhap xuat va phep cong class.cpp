#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){  // hàm tìm ucln
    if(b==0) return a;
    return gcd(b,a%b);
}

class PhanSo {
public:
    long long a, b;
    PhanSo() : a(0), b(1) {};

    PhanSo(long long a, long long b){
        this->a = a;
        this->b = b;
    }

    friend istream& operator>>(istream& is, PhanSo& a) {
        is >> a.a >> a.b;
        return is;
    }

    PhanSo operator+(PhanSo& other){
        PhanSo result;
        result.a = this->a * other.b + other.a * this->b;
        result.b = this->b * other.b;
        long long g=gcd(result.a,result.b);
        result.a=result.a/g;
        result.b=result.b/g;
        return result;
    }

    friend ostream& operator << (ostream& is ,const PhanSo& c){
        is << c.a << '/' << c.b;
        return is;
    }

};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
