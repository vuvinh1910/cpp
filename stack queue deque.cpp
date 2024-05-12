#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> st;
  int n=8;
  st.top() // tra ve phan tu tren cung ngan xep;
  st.pop() // xoa phan tu tren cung trong ngan xep;
  st.push(n); // them n vao sau ngan xep;

  queue<int> qe;
  qe.front() // tra ve phan tu dau tien trong han doi;
  qe.pop() // xoa phan tu dau tien trong hang doi;
  qe.push(n) // them n vao sau hang doi;
    
  deque<int> dq; // hang doi 2 dau;
  dq.push_back(n); // them n vao cuoi hang doi;
  dq.pusk_front(n); //them n vao dau hang doi;
  
  dq.pop_front(); // xoa phan tu dau tien hang doi;
  dq.pop_back(); // xoa phan tu cuoi cung hang doi;
  
}
