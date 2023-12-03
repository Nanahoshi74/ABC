#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // ボールの色を格納するベクター
    vector<int> colors(N + 1);

    // 各箱に最初に入っているボールの色を読み込む
    for (int i = 1; i <= N; ++i) {
        cin >> colors[i];
    }

    // 色ごとの箱の数を格納するベクター
    vector<int> colorCount(N + 1, 0);

    // 初期状態での色ごとの箱の数をカウント
    for (int i = 1; i <= N; ++i) {
        colorCount[colors[i]]++;
    }

    // 各クエリを処理する
    for (int q = 0; q < Q; ++q) {
        int a, b;
        cin >> a >> b;

        // 箱aから箱bにボールを移す
        colorCount[b] += colorCount[a];
        colorCount[a] = 0;

        // 結果を出力する
        cout << count_if(colorCount.begin(), colorCount.end(), [](int count) { return count > 0; }) << endl;
    }

    return 0;
}
