// Cho mảng A[], B[] đều có N phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất của  biểu thức
// P = A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] bằng cách tráo đổi vị trí các phần tử của cả mảng A[] và B[].

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while (t--)
	{
		int n;cin>>n;
		vector<long long>a,b;
		for (int i = 0; i < n; i++)
		{
			int y;cin>>y;
			a.push_back(y);
		}
		sort(a.begin(),a.end());
		for (int i = 0; i < n; i++)
		{
			int y;cin>>y;
			b.push_back(y);
		}
		sort(b.rbegin(),b.rend());
		long long dem=0;
		for (int i = 0; i < a.size(); i++)
		{
			dem += a[i]*b[i];
		}
		cout << dem << endl;
	}
	
}
