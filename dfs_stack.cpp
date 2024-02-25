#include<bits/stdc++.h>
using namespace std;

void dfs_stack(int u,int check[100],int n,int a[100][100]){
    stack<int> st;
    st.push(u);
    check[u]=1;
    cout << u << " ";
    while (!st.empty())
    {
        int s = st.top();  // s luon goi lai moi lan trong vong lap de cap nhat gia tri moi khi stack thay doi.
        st.pop();
        for (int i = 1; i <= n; i++)
        {
            if(a[s][i]==1 && check[i]==0){
                st.push(u);
                st.push(i);
                check[i]=1;
                dfs_stack(i,check,n,a);
                break; // break de tranh truong hop 2-4-6 thanh 2-6 bo qua 4;
            }
        }
        
    }
    
}

int main(){
    int n;cin>>n;
    int u;cin>>u;
    int  a[100][100];
    int check[100];
    for (int i = 0; i < 100; i++)
    {
        check[i]=0;
    }
    
    for(int i=1;i<=n;i++){
        for (int  j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    dfs_stack(u,check,n,a);
}
