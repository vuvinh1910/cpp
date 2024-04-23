#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n;
		map<int,int> masp;
		for (int i = 0; i < n; i++)
		{
			int y;cin>>y;
			masp[y]++;
		}
		if(masp.size()==1) cout << "-1";
		else {
      // duyet o vi tri 1 va 2
			auto it = masp.begin();
			cout << it->first << " ";
			it++; cout << it->first << " ";
			}
		cout << endl;


    // duyet het
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
	}
	
    
}
