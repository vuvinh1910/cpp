#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// int xx(int b[100000],int a){
//     int o=b[1]-b[0];
//     for(int j=1;j<a-1;j++){
//         if(b[j+1]-b[j] < o){
//             o = b[j+1]-b[j];
//         }
//     }
//     return o;
// }

// Cách dùng cơ bản nhất của hàm sort() là sắp xếp tăng dần các phần tử từ vị trí 
// i đến vị trí j (lưu ý ở đây ta xét mảng bắt đầu từ vị trí 0)
   sort(a + i, a + j + 1); // sx từ i đến j

int main() {
    int v;
    cin >> v;
    while(v--){
    int a; cin >> a;
    int b[100000];
    for(int i=0;i<a;i++){
        cin >> b[i];
    }
    sort(b,b+a);
    // cout << xx(b,a) << endl;
    }
}
