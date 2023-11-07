#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> prerequisites(N + 1);
    vector<int> in_degree(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        int C;
        cin >> C;
        for (int j = 0; j < C; ++j) {
            int P;
            cin >> P;
            prerequisites[P].push_back(i);
            ++in_degree[i];
        }
    }

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        if (in_degree[i] == 0 && i != 1) {
            q.push(i);
        }
    }

    vector<int> reading_order;
    while (!q.empty()) {
        int book = q.front();
        q.pop();
        reading_order.push_back(book);

        for (int prereq : prerequisites[book]) {
            --in_degree[prereq];
            if (in_degree[prereq] == 0) {
                q.push(prereq);
            }
        }
    }

    for (int book : reading_order) {
        cout << book << " ";
    }
    cout << endl;

    return 0;
}
