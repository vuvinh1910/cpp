#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Mở tệp PTIT.in để đọc
    ifstream fin("PTIT.in");
    
    // Mở tệp PTIT.out để ghi
    // nếu tệp ko tồn tại thì nó sẽ tự tạo tệp mới.
    // khi mở tệp thì tất cả dữ liệu của ptit.out đã tồn tại trc đó sẽ bị xóa hết để ghi đè dữ liệu mới.
    ofstream fout("PTIT.out");


    // nếu muốn ghi dữ liệu mà ko xóa dữ liệu cũ, hãy mở ptit.out ở chế độ ghi đè.
    ofstream fout("PTIT.out", ios::app);
    

    // Sao chép nội dung từ PTIT.in sang PTIT.out
    string ch;
    while (getline(fin,ch)) { // đọc tất cả dòng trong file PTIT.in
        fout << ch;        // toán tử ghi << và đọc là >>, đừng viết ch >> fout, fout đang ở chế độ ghi dữ liệu.
		fout << endl;    // hàm getline ko đọc ký tự xuống dòng nên sau khi ghi dòng thì cần phải xuống dòng
    }

    fin.close(); // đóng file.
    fout.close();

    return 0;
}
