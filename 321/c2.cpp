#include <bits/stdc++.h>
using namespace std;

int K;
vector<int> ans;

void dfs(int k) {
    ans.push_back(k);
    string t = to_string(k);
    int e = t.back() - '0';
    if (e != 0) {
        for (int i = 9; i >= 0; i--) {
            string s = t;
            if (s.back() - '0' > i) {
                s += to_string(i);
                dfs(stoi(s));
            }
        }
    }
}

int main() {
    cin >> K;

    for (int i = 0; i < 10; i++) {
        dfs(i);
    }

    sort(ans.begin(), ans.end());
    cout << ans[K] << endl;

    return 0;
}
