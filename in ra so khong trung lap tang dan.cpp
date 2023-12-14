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

        // insert(val): Chèn một giá trị vào Set.
        // erase(val): Xóa một giá trị khỏi Set.
    
        // find(val): Tìm một giá trị trong Set.
        //Nếu set.find(value) không tìm thấy value trong set,
        //nó sẽ trả về iterator chỉ đến cuối của set, tức là iterator có giá trị bằng set.end()
        it = mySet.find(value);
        if (it != mySet.end()) {
            cout << "Found!" << endl;
        } else {
            cout << "Not found!" << endl;
        }

        
    
        // size(): Trả về số lượng phần tử trong Set.
        // empty(): Kiểm tra xem Set có rỗng hay không.
        // clear(): Xóa tất cả các phần tử khỏi Set.
    
    for(int s:sett){
        cout<<s<<" "; // vd input 33441122 -> output 1234
    }
    
}
