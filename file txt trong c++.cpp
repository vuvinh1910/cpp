#include <bits/stdc++.h>
using namespace std;


int main (){
    // Để thao tác với file, trước tiên chúng ta cần phải tạo một con trỏ chỉ đến thực thể của kiểu cấu trúc FILE chứa thông tin của file đó:
    FILE *file = nullptr;  // gán con trỏ rỗng ban đầu

    // Việc mở file và gán địa chỉ file vào con trỏ thường được tiến hành đồng thời
    // mở một file PTIT.in bằng hàm fopen() và gán vào con trỏ file:
    file = fopen("PTIT.in","r");   // fopen(tên file,chế độ mở file), ở đây "r" là chế độ "READ" dùng để đọc file muốn mở

    // khai báo con trỏ file2, mở file PTIT.out và gán địa chỉ vào con trỏ file2
    FILE *file2 = nullptr;
    file2 = fopen("PTIT.out","w");  // mở file PTIT.out với chế độ "w" là WRITE dùng để ghi vào file
    // chế độ này sẽ xóa tất cả dữ liệu trong file hiện tại và ghi đè bằng dữ liệu mới.

  
    char c;  // nên bỏ c = fget(file) trong ngoặc tránh lỗi so sánh
    while ( (c = fgetc(file)) != EOF)  // Giá trị EOF là một giá trị đặc biệt được sử dụng để chỉ định kết thúc của tệp.
                                       // Do đó, !=EOF có thể được sử dụng để kiểm tra xem đã đọc đến cuối tệp hay chưa.
                // hàm fgetc() dùng để đọc tất cả các ký tự trong tệp, khi kết thúc tệp nó sẽ trả về 
    {
        fputc(c,file2);  // hàm fputc() dùng để ghi 1 ký tự vào tệp được trỏ đến bởi con trỏ file2  .Cú pháp : fputc(ký tự, file muốn ghi);
    }


    // mở file thì phải đóng file khi kết thúc, hàm đóng file là : fclose( tệp trỏ đến );
    fclose(file);
    fclose(file2);
}
