#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main(){
    int a;cin >>a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >>b[i];
    }
    set<int>sett;//khai bao ham set(chi luu gia tri khong lap lai)
    // dung ham unordered_map neu muon giu nguyen thu tu

    for(int u : b){     //vong lap for-each. Duyet qua tat ca phan tu trong b,
        sett.insert(u); // moi phan tu duoc duyet se sao chep sang u, ham insert truyen
                        //gia tri cua u vao sett(ham set)
    }

    for(int s:sett){
        cout<<s<<" "; // vd input 33441122 -> output 1234
    }
    
}
