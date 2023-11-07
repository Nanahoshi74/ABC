#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MAX_N = 20; // Maximum number of roulettes
const int MAX_M = 100000; // Maximum possible M

double expected_value[MAX_M + 1];
vector<int> point[MAX_N];
int cost[MAX_N];

int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> P(N);

    for (int i = 0; i < N; ++i) {
        cin >> cost[i] >> P[i];
        point[i].resize(P[i]);
        for (int j = 0; j < P[i]; ++j) {
            cin >> point[i][j];
        }
    }

    for (int m = 1; m <= M; ++m) {
        expected_value[m] = 0.0;
        for (int i = 0; i < N; ++i) {
            double roulette_prob = (double)1.0 / (double)P[i];
            double sum_expected = 0.0;

            for (int j = 0; j < point[i].size(); ++j) {
                int p = point[i][j];
                if (p <= m) {
                    sum_expected += expected_value[max(m - p, 0)] + cost[i];
                }
            }

            expected_value[m] = max(expected_value[m], sum_expected);
        }
    }

    cout << fixed << setprecision(20) << expected_value[M] << endl;

    return 0;
}
