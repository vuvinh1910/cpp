#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
  int x;
public:
  Player () {}; // định nghĩa hàm class nếu không sẽ gặp lỗi khai báo Player x,y; trong các hàm sau này
  // Trong class Player, có một constructor mặc định không có tham số (Player() {}) và một constructor có tham số (Player(int x)).
  //Constructor không có tham số được sử dụng để tránh lỗi khi khai báo một đối tượng Player mà không có giá trị khởi tạo.
  //Constructor có tham số giúp tạo đối tượng Player với giá trị khởi tạo cho biến x.
  Player (int x){
    this->x=x;
  } // ví dụ dùng : Player a(2) trong main

  // tương tự chức năng hàm sau
  void set(int x){  // hàm đặt giá trị x
    this->x=x;      // cách dùng : a.set(6); trong 
  }

  friend void in(Player& mot);  // hàm in sẽ là bạn của class Player, nó sẽ truy cập đc các biến,hàm private,proteced,.. trong class này
                              // lưu ý, hàm friend in không phải thành viên của class Player như x, set


  // định nghĩa trong class + ví dụ sơ qua về operator
  friend Player operator+(const Player&x, int a){  // hiểu đơn giản là: Player = Player + int ;
    Player y;
    y.x=x.x+a;
    return y;  // trả về class y
  }
};

void in(Player& a){       // nếu không khai báo friend in thì hàm in sẽ bị lỗi vì ko truy cập được x trong class
  cout << a.x << endl;       // có thể định nghĩa hàm bạn bên trong hoặc ngoài class PLayer
}

int main(){
  Player x;
  x.set(2); // đặt x = 2; hoặc dùng Player x(2);
  in(x); // in ra x, có thể dùng hàm friend bất cứ đâu trong chương trình như 1 hàm bình thường,
         // ko cần dùng x.in() vì ko phải là thành viên của class Player


  Player y = x + 2; // player y = player x + int a =2
  in(y); // in ra x trong class y (y.x)
}
