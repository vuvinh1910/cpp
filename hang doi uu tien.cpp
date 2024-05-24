#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

//Ví dụ với xâu S[] = “AAABBCD” ta có F(S) = 3^2 + 2^2 + 1^2 + 1^2 = 15.

// khởi tạo hang đợi ưu tiên lưu gtri số lần xuất hiện mỗi ký tự trong xâu
// lặp k lần, mỗi lần -1 số lần xuất hiện ký tự nhiều nhất, hàng đợi sẽ tự động cập nhật sx khi pop()
// tính giá trị es.


int main() {
    int t;cin>>t;
    while (t--)
    {
        int k;cin>>k;
        string s; cin>>s;
        priority_queue<int , vector<int>> qe; // hang doi uu tien se tu dong sap xep gia tri tu lon den be
        priority_queue<int, vector<int>,greater<int>> qu; // hang doi uu tien sx tu be den lon
        int solan[300]={0};
        for (int i = 0; i < s.size(); i++)
        {
            solan[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(solan[s[i]]>0){
                qe.push(solan[s[i]]);
                solan[s[i]]=0;
            }
        }
        
        while (k>0 && !qe.empty())
        {
            k-=1;
            int t = qe.top();
            qe.pop();
            t--;
            qe.push(t);;
        }
        long long es=0;
        while (!qe.empty())
        {
            long long t = qe.top();
            qe.pop();
            es+=t*t;
        }
        
        cout << es << endl;
    }
    
    
}
