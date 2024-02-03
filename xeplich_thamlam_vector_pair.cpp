#include <iostream>
#include <vector>
#include <algorithm>

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

        vector<pair<int, int>> actions;

        // Nhập thông tin về thời gian bắt đầu và kết thúc mỗi hành động
        for (int i = 0; i < N; ++i) {
            int Si;
            cin >> Si;
            actions.push_back({Si, 0});
        }

        for (int i = 0; i < N; ++i) {
            int Fi;
            cin >> Fi;
            actions[i].second = Fi;
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
