#include <bits/stdc++.h>

using namespace std;

int main() {
    // 主菜の数 N と副菜の数 M
    int N, M,L;
    cin >> N >> M >> L;

    // 主菜の価格を格納する配列
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    // 副菜の価格を格納する配列
    vector<int> b(M);
    for (int i = 0; i < M; ++i) {
        cin >> b[i];
    }

    // 悪い組み合わせの数 L

    // 悪い組み合わせの組を格納するセット
    set<pair<int, int>> bad_combinations;
    for (int i = 0; i < L; ++i) {
        int c, d;
        cin >> c >> d;
        bad_combinations.insert({c, d});
    }

    // 主菜と副菜の最安値を求める
    int min_a = *min_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());

    // 悪い組み合わせでない場合、最大価格を更新する
    int max_price = max(min_a + min_b, *max_element(a.begin(), a.end()) + *max_element(b.begin(), b.end()));
    for (const auto& bad_combination : bad_combinations) {
        int c = bad_combination.first;
        int d = bad_combination.second;
        max_price = max(max_price, a[c - 1] + b[d - 1]);
    }

    cout << max_price << endl;

    return 0;
}
