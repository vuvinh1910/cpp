#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        next_permutation(a.begin(),a.end()); // hoan vi ke tiep
        // 1 2 3 4 5 -> 1 2 3 5 4

        prev_permutation(a.begin(),a.end());// hoan vi truoc do
        // 1 2 3 5 4 -> 1 2 3 4 5
      
        // ham in ra
        for (int i = 0; i < n; i++)
        {
            cout << a[i]<<" ";
        }
        cout << endl;

        while( next_permutation(a.begin(),a.end()) ) // duyet qua tat ca hoan vi
        {
            //ham in ra
            for (int i = 0; i < n; i++)
            {
                cout << a[i]<<" ";
            }
            cout << endl;
        }
    
}
