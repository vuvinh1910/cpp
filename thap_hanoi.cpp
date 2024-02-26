#include<iostream>
using namespace std;
void Tower(int n , char a, char b, char c ){
	if(n==1){
		cout<<a<<" -> "<<c<<endl;
		return;
	}
	Tower(n-1,a,c,b); 	// chuyển n-1 đĩa từ a đến cột trung gian b, lấy c làm cột trung gian hiện tại.
	Tower(1,a,b,c);		// chuyển đĩa lớn nhất còn lại ở cột a đến cột c làm đáy.
	Tower(n-1,b,a,c);	// chuyển lại n-1 đĩa từ cột b về cột c, lấy cột a làm trung gian hiện tại.
	}
int main(){
	char a='A', b='B', c='C';
	int n;
	// cout<<"Nhap n: ";
	cin>>n;
	Tower(n,a,b,c);
}
