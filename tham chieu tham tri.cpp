#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void set(int *a){
    *a=10;
}

void set2(int &a){
    a=100;
}

int main() {
    int a=1;
    set(&a);
    cout << a << endl;
    set2(a);
    cout << a<< endl;
    
}
