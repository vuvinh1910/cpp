#include <stdio.h>
#define MAX_LEN 256

int main(){
    char s[MAX_LEN];
    int i = 0, r = 3;
    for(; i < r; ++i){
        //scanf("%[^\n]%*c", s); // có %*c
        scanf("%[^\n]", s); // không có %*c
        printf("====\nINPUT: %s\n====\n", s);
    }
    
    int a;
    cin >> a;
    scanf("\n"); // cin.ingore(); neu dung bi loi va nguoc lai, hay bi loi trong class operator>>
    string b;
    getline(cin,b);


    // luu y
    scanf("%[^\n]%*c", cc); // neu char cc[] thi se loai bo dc ky tu xuong dong \n
    scanf("%[^\n]%*c", cc); // se bi loi ko loai bo dc ky tu \n neu la string cc;
}

