// Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương <JobId, Deadline, Profit>, trong đó JobId là mã của việc, Deadline là thời gian kết thúc của việc,
// Profit là lợi nhuận đem lại nếu hoàn thành việc đó đúng hoặc trước thời gian.
// Thời gian tối thiểu để hoàn thành mỗi công việc là 1 đơn vị thời gian. Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các việc với giả thiết mỗi việc được thực hiện đơn lẻ.
#include<bits/stdc++.h>
using namespace std;

bool sx (pair<int,int>&a,pair<int,int>&b)
{
	if(a.second == b.second) return a.first > b.first;
	return a.second>b.second;
}
int main(){
	int t;cin>>t;
	while (t--)
	{
		int n;cin>>n;
		vector<pair<int,int>> cv;
		for (int i = 0; i < n; i++)
		{
			int x,y,z;
			cin>>x>>y>>z;
			cv.push_back({y,z});
		}
		sort(cv.begin(),cv.end(),sx);
		int colum[1001]={0};
		int dem=0;
		int dem1=0;
		for (int i = 0; i < cv.size(); i++)
		{
			while(colum[cv[i].first]==1 && cv[i].first>0) {cv[i].first--;}
			if(cv[i].first > 0 && colum[cv[i].first]==0){
				colum[cv[i].first]=1;
				dem++;
				dem1+=cv[i].second;
			}
		}
		cout << dem << " " << dem1 << endl;
	}
	
}
