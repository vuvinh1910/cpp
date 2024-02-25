#include<bits/stdc++.h>
using namespace std;

void dfs(int u,int check[100],int n,int a[100][100]){
    cout << u << " ";
    check[u]=1;
    for (int i = 1; i < n+1; i++)
    {
        if(a[u][i]==1 && check[i]==0){
            dfs(i,check,n,a);
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

    dfs(u,check,n,a);
}