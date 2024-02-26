#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str = "Hello World!";
    string substr = str.substr(1, 3);
    cout << substr << endl;
    // ell

    string substr2 = str.substr(1,6); 
    cout << substr2 << endl;
    // ello W
    return 0;
}
