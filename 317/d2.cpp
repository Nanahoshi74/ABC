#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n), z(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int total_seats = 0;
    int total_x = 0;

    for (int i = 0; i < n; ++i) {
        total_seats += z[i];
        total_x += x[i];
    }

    int half_seats = (total_seats + 1) / 2;

    int needed_swaps = 0;

    for (int i = 0; i < n; ++i) {
        // 鞍替え人数の最小値を計算
        int min_swaps = max(0, (z[i] + 1) / 2 - x[i]);
        needed_swaps += min_swaps;
    }

    int needed_x_swaps = max(0, half_seats - total_x);

    int result = max(needed_swaps, needed_x_swaps);

    cout << result << endl;

    return 0;
}
