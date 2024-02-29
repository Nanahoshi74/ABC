#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> dp(N, 1);

    for (int i = 1; i < N; ++i) {
        int left = 0, right = i - 1;
        while (right-left > 1) {
            int mid = (left + right) / 2;
            if (A[i] - A[mid] <= D) {
                left = mid;
            } else {
                right = mid;
            }
        }
        dp[i] = max(dp[i], i - left);
    }

    int result = *max_element(dp.begin(), dp.end());
    cout << result << endl;

    return 0;
}
