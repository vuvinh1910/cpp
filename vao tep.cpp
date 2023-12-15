#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long num=0;
  
	ifstream input("DATA.in"); // mở file có tên data.in trong cùng đường dẫn file chạy
	// fstream output;  // khởi tạo output
	// output.open("C:\\Users\\minhh\\OneDrive\\Desktop\\output.txt", ios::out ); // tạo tệp lưu output với đường dẫn đã đưa ra.
  // đường dẫn nên dùng \\ thay vì \ vì có thể trùng lệnh như \n


  
	// string str;
	// input>>str; // lấy giá trị biến str từ file input. ví dụ "a b c d" thì dùng sẽ trả kết quả là a, nếu tiếp tục đọc sẽ đọc tiếp từ con trỏ chỉ
  // đằng sau chữ a . vd: input >> str lần nữa sẽ trả về b.
  // cách chuyển con trỏ về đầu file
  //"a b c d"
  string line;
	input >> line;  // phân biệt mỗi lần đọc dữ liệu >> là đọc cho đến khi gặp dấu cách thì hết.
	cout << line << endl; // sẽ in ra a
	input.seekg(0,ios::beg); // hàm này đưa con trỏ về vị trí đầu tiên của file, nếu ko có hàm này thì in tiếp ra b.
	input >> line;
	cout << line; // sẽ in ra a
  

  
  // Hàm eof() trả về true khi con trỏ đã trỏ tới cuối file và với false thì ngược lại.
  string line;
	while(!input.eof())	//khi chưa tới cuối file thì tiếp tục đọc
	{
		getline(input,line); // đọc mỗi dòng trong file, hàm này thường dùng để đọc toàn bộ dl kể cả dấu cách.
                        // hàm getline lấy 1 dòng trong input rồi lưu vào biến line, trả con trỏ về đầu dòng tiếp theo.
		output<<line; // in ra dòng vừa đọc và quay lại điều kiện while.
	}


  
  string line;
	while(getline(input,line))	//hoặc dùng dk này để đọc tất cả các dòng, chức năng như hàm trên đều đọc tới cuối file.
	{
		stringstream ss(line); // tạo stringstream để đọc dữ liệu phân biệt qua dấu cách từ dòng line vừa lấy từ file ở trên.
        string t;
        while (ss >> t)  // chuyển hết dữ liệu (các từ) vào biến t, ở đây t là string nên đa phần là truyền tất cả các từ trong dòng.
                         // nếu t là kiểu int thì sẽ truyền đc các tham số 1 2 3, ko truyền các tham số như abc,Abc...
        {
            if(ss.fail()){  //Hàm fail() trả về true nếu hàm >> sai(ss >> t) khi quá giá trị (5 tỉ tỉ sức mạnh truyền vào int),hoặc sai kiểu dữ liệu truyền vd "char" >> int;
                            //trả về false khi không có lỗi phát sinh khi truyền.
              //exit
            } else //dosomething
        }
        
	}

	cout<<num<<endl; // in str ra màn hình console
	//output<<"Hello world"; //in Hello world vào file output
	input.close(); //đóng file input
	//output.close(); //đóng file output
	return 0;
}
