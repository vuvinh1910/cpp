#include<bits/stdc++.h>

using namespace std;

// in        out
// 4
// ))((      2
// ((((      2
// (((())    1
// )(())(((  3
// ý tưởng: loại các cặp () ra khỏi stack, còn lại những cặp chưa sắp xếp.
// duyệt qua các cặp chưa sx, tìm đc số cách.

int dem(string s){
    stack<char> tet;
    int current=0;
    for (char &ss : s)
    {
        tet.push(ss);
        if(tet.top()==')'){
            char t = tet.top();
            tet.pop();
            if(!tet.empty() && tet.top()!=t) tet.pop();
            else tet.push(t);
        }
    }
    string final="";
    while (!tet.empty())
    {
        char t=tet.top();
        tet.pop();
        final+=t;
    }
    reverse(final.begin(),final.end());
    for (int i = 0; i < final.size(); i+=2)
    {
        if(final[i]!='(' ) current++;
        if(final[i+1]!=')') current++;
    }
    
    return current;
}

int main()
{
    int t;cin>>t;
    scanf("\n");
    while (t--)
    {
        string s;getline(cin,s);
        cout << dem(s) << endl;
    }
    
    return 0;
}
