#include<bits/stdc++.h>
using namespace std;
long long m=1000000007;

// Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước.
// a.first là phần tử trong mảng, a.second là số lần xuất hiện của a.first.
bool sx(pair<int, int>&a,pair<int,int> &b){
	if(a.second!=b.second) return a.second > b.second;
	return a.first < b.first ;
}

int main(){

        int n;cin>>n;
		map<int,int> masp;
		vector<pair<int,int>> kk;
		for (int i = 0; i < n; i++)
		{
			int y;cin>>y;
			masp[y]++;
		}
		for(auto pair : masp){
			kk.push_back(pair);
		}
		sort(kk.begin(),kk.end(),sx);
		for (int i = 0; i < kk.size(); i++)
		{
			for (int j = 0; j < kk[i].second; j++)
			{
				cout << kk[i].first << " ";
			}
			
		
		cout << endl;
		
		
    }
    
}
