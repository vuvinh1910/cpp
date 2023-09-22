#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
  int x;
public:
  void set(int x){  // hàm đặt giá trị x
    this->x=x;
  }

  friend void in(Player& mot);  // hàm in sẽ là bạn của class Player, nó sẽ truy cập đc các biến,hàm private,proteced,.. trong class này
                              // lưu ý, hàm friend in không phải thành viên của class Player như x, set

  friend Player operator+(const PLayer&x, int a){
}
};

void in(Player& a){  // nếu không khai báo friend in thì hàm in sẽ bị lỗi vì ko truy cập được x
  cout << a.x;       // có thể định nghĩa hàm bạn bên trong hoặc ngoài class PLayer
}

int main(){
  Player x;
  x.set(2); // đặt x = 2;
  in(x); // in ra x, có thể dùng hàm friend bất cứ đâu trong chương trình như 1 hàm bình thường,
         // ko cần dùng x.in() vì ko phải là thành viên của class Player
}
