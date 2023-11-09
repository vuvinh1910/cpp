#include<bits/stdc++.h>

using namespace std;

// check cau hinh cuoi (tu vi tri n-k+1 den vi tri n)
bool check(vector<int>& x,vector<int>& so, int k){
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]!=so[so.size()-k+i]){
            return false;
        }
    }
    return true;
}

int main(){
    int a; cin >> a;
    vector<int> so;
    vector<int> x;
    // neu nhap day so bat ky hay sap xep tang dan de su dung code chinh xac

    // day tang dan tu 1 den a
    for (int i = 1; i <= a; i++)
    {
        so.push_back(i);
    }

    int k; cin >> k;// nhap k
    for (int i = 0; i < k; i++)
    {
        x.push_back(so[i]);
        cout << x[i];
    } 
    cout << endl;

    while (!check(x,so,k))
    {
        for (int i = x.size()-1; i >= 0; i--) // tim gia tri t lon nhat
        {
            if(x[i]<so[a-k+i]){

                int sln; // sln luu vi tri cua so da thay vao vi tri t

                //thay doi so tai vi tri t thanh so lon hon no tiep theo
                for (int j = i+1; j < so.size(); j++)
                {
                    if(so[j]>x[i]){
                        x[i]=so[j];
                        sln=j;
                        break;
                    }
                }
                
                // cac so tu vi tri t tro ve sau se la day tang dan gan nhat trong day so tu vi tri sln+1
                for (int j = i+1; j < x.size(); j++)
                {
                    x[j]=so[++sln];
                }

                //in
                for (int i = 0; i < x.size(); i++)
                {
                    cout << x[i];
                }
                cout << endl;
                break;
            }

        }
        
    }
    
}
