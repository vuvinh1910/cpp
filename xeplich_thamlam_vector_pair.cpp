#include <iostream>
#include <vector>
#include <algorithm>

// thuat toan co the dung de giai cho de bai sau:
// Trên trục Ox tính từ vị trí 0, người ta muốn xếp nhiều nhất các đoạn thẳng sao cho không đoạn nào chồng lấn lên nhau. 
// Đoạn thẳng thứ i có vị trí bắt đầu là X1[i] và kết thúc tại X2[i], với X1[i] <= X2[i].
// Hãy tính số đoạn thẳng nhiều nhất có thể được lựa chọn để đưa lên trục Ox và không có đoạn nào chồng lấn lên nhau.

using namespace std;

bool sapXep(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<pair<int, int>> actions; // khoi tao cap doi giatri batdau_ketthuc

        // Nhập thông tin về thời gian bắt đầu và kết thúc mỗi hành động
        for (int i = 0; i < N; ++i) {
            int Si;
            cin >> Si;
            actions.push_back({Si, 0}); // tgian bat dau cuoc hop
        }

        for (int i = 0; i < N; ++i) {
            int Fi;
            cin >> Fi;
            actions[i].second = Fi; // tgian ket thuc cuoc hop luu vao bien second
        }

        // Sắp xếp các hành động theo thời gian kết thúc tăng dần
        sort(actions.begin(), actions.end(), sapXep);

        int dem = 1; // ít nhất có một hành động được thực hiện
        int endTime = actions[0].second;

        // Chọn lựa tham lam các hành động không xảy ra mâu thuẫn
        for (int i = 1; i < N; ++i) {
            if (actions[i].first >= endTime) {
                ++dem;
                endTime = actions[i].second;
            }
        }

        cout << dem << endl;
    }

    return 0;
}



        // string s;cin>>s;
        // map<char,int>masp;
        // for (int i = 0; i < s.length(); i++)
        // {
        //     masp[s[i]]++;
        // }

        // vector<pair<char,int>> vect; khoi tao vector co chua 1 cap gia tri char va int.


        // truyen pair cua map vao pair cua vector.
        // for(auto&pair:masp){
        //     vect.push_back(pair);
        // }


        // // in ra cap doi gia tri char va int cua vector vect.
        // for (int i = 0; i < vect.size(); i++)
        // {
        //     cout << vect[i].first << vect[i].second;
        // }
