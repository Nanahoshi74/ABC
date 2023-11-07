#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int calculate_area(vector<vector<int>>& rectangles) {
    set<int> x_values;
    set<int> y_values;

    // すべての x 座標と y 座標を収集
    for (auto& rect : rectangles) {
        x_values.insert(rect[0]);
        x_values.insert(rect[1]);
        y_values.insert(rect[2]);
        y_values.insert(rect[3]);
    }

    vector<int> x_sorted(x_values.begin(), x_values.end());
    vector<int> y_sorted(y_values.begin(), y_values.end());

    int area = 0;

    // 各小さな長方形の面積を計算し、全体の面積に加える
    for (int i = 0; i < x_sorted.size() - 1; i++) {
        for (int j = 0; j < y_sorted.size() - 1; j++) {
            int x1 = x_sorted[i];
            int x2 = x_sorted[i + 1];
            int y1 = y_sorted[j];
            int y2 = y_sorted[j + 1];
            int count = 0;

            for (auto& rect : rectangles) {
                if (rect[0] <= x1 && x2 <= rect[1] && rect[2] <= y1 && y2 <= rect[3]) {
                    count++;
                }
            }

            if (count > 0) {
                area += (x2 - x1) * (y2 - y1);
            }
        }
    }

    return area;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> rectangles;

    // n行の長方形情報を受け取る
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        rectangles.push_back({a, b, c, d});
    }

    // 面積を計算して出力
    int result = calculate_area(rectangles);
    cout << result << endl;

    return 0;
}
