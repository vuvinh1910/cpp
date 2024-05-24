#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int hang[100],cot[100],cheochinh[100],cheophu[100];

bool check(int i,int j){
    if(hang[i]==1 || cot[j]==1 || cheochinh[i-j]==1 || cheophu[i+j]==1){
        return false;
    } else return true;
}

void backtrack(int &dem,int solandat,int n,int row){
    if(solandat==n){
        dem++;
    } else {
        for (int i = 0; i < n; i++)
        {
            if(check(row,i)){
                hang[row]=1 ; cot[i]=1 ; cheochinh[row-i]=1 ; cheophu[row+i]=1;
                backtrack(dem,solandat+1,n,row+1);
                hang[row]=0 ; cot[i]=0 ; cheochinh[row-i]=0 ; cheophu[row+i]=0;
            }
        }       
    }
}

int main(){
    faster();
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int dem=0;
        int solandat=0;
        backtrack(dem,solandat,n,0);
        cout << dem << endl;
    }
    
}
