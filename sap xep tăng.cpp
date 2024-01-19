#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "Sap xep tang: \n";
sort(arr.begin(), arr.end()); // sắp xếp tăng
printArray(arr);

cout << "Sap xep giam: \n";
sort(arr.rbegin(), arr.rend()); // sắp xếp giảm
sort(arr.begin()+n, arr.end(),greater<int>()) //sắp xếp giảm từ vị trí n trở về sau
printArray(arr);
}
