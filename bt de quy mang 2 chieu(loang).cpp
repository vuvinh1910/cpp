#include <bits/stdc++.h>
using namespace std;

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void loang(vector<vector<int>>& matran, int i, int j){
        matran[i][j]=0;
        int tempi,tempj;
        for(int test = 0; test <8;test++){
            tempi = i + dx[test];
            tempj = j + dy[test];
            if(tempi>=0 && tempi < matran.size() && tempj >=0 && tempj < matran[0].size() && matran[tempi][tempj]==1){
                loang(matran, tempi, tempj);
            }
        }

}

int main(){
    int t; cin >> t;
    while (t--)
    {   
        int hang,cot; cin >> hang >> cot;
        vector<vector<int>> matran(hang, vector<int>(cot));
        for (int i = 0; i < hang; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                cin >> matran[i][j];
            }
            
        }

        int count = 0;
        for (int i = 0; i < hang; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                if(matran[i][j]==1){
                    count ++;
                    loang(matran,i,j);
                }
                
            }
            
        }
        cout << count << endl;
    }
    
}
