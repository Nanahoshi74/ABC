#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N, K, P;
    cin >> N >> K >> P;

    vector<vector<int>> A(N, vector<int>(K));
    vector<int> C(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cin >> A[i][j];
        }
        cin >> C[i];
    }

    const int MAX_P = 5; // 制約より

    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(K + 1, vector<long long>(MAX_P + 1, LLONG_MAX)));

    // 初期化
    dp[0][0][0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            for (int k = 0; k <= MAX_P; k++) {
                // 開発案 i を実行しない場合
                dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k]);

                if (j > 0 && k >= A[i - 1][j - 1]) {
                    // 開発案 i を実行する場合
                    dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j - 1][k - A[i - 1][j - 1]] + C[i - 1]);
                }
            }
        }
    }

    long long minCost = LLONG_MAX;
    for (int k = P; k <= MAX_P; k++) {
        minCost = min(minCost, dp[N][K][k]);
    }

    if (minCost == LLONG_MAX) {
        cout << -1 << endl; // 目標を達成できない場合
    } else {
        cout << minCost << endl;
    }

    return 0;
}
