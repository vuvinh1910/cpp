#include <bits/stdc++.h>
using namespace std;

int kanade(int a[],int n){
  int tonghientai = 0;
  int tongmax = INT_MIN;
  for(int i =0;i<n;i++){
      tonghientai+=a[i];
      tonghientai=max(a[i],tonghientai);
      tongmax=max(tongmax,tonghientai);
    }
  return tongmax;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
      cin >> a[i];
    }
    cout << kanade(a,n);
}
