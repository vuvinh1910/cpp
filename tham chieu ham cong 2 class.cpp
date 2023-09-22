#include <iostream>

class Player {
public:
    int score;

    Player(int s) : score(s) {}

    // Hàm này trả về tham chiếu đến đối tượng Player và thay đổi đối tượng ban đầu
    friend Player& operator+(Player& x, int a) {
        x.score += a;
        return x;
    }

    // Hàm này trả về một bản sao của đối tượng Player sau khi thực hiện phép cộng và không thay đổi đối tượng ban đầu
    friend Player operator+(const Player& x, int a) {
        Player temp(x.score + a);
        return temp;
    }
};

int main() {
    Player player1(100);
    Player player2(200);

    // Sử dụng hàm thay đổi đối tượng Player ban đầu
    Player& updatedPlayer = player1 + 50;
    std::cout << "Updated Player 1 Score: " << updatedPlayer.score << std::endl;

    // Sử dụng hàm không thay đổi đối tượng Player ban đầu
    Player newPlayer = player2 + 75;
    std::cout << "Original Player 2 Score: " << player2.score << std::endl;
    std::cout << "New Player Score: " << newPlayer.score << std::endl;

    return 0;
}
