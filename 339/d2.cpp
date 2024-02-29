#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point {
    int x, y, steps;
};

bool operator==(const Point& a, const Point& b) {
    return a.x == b.x && a.y == b.y;
}

int findMinSteps(vector<string>& grid, Point start1, Point start2) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    queue<Point> q;
    q.push(start1);
    q.push(start2);

    while (!q.empty()) {
        Point curr = q.front();
        q.pop();

        if (curr.x < 0 || curr.x >= n || curr.y < 0 || curr.y >= n || grid[curr.x][curr.y] == '#') {
            continue;
        }

        if (visited[curr.x][curr.y]) {
            continue;
        }

        visited[curr.x][curr.y] = true;

        if (grid[curr.x][curr.y] == 'P' && !(curr == start1 || curr == start2)) {
            return curr.steps;
        }

        q.push({curr.x + 1, curr.y, curr.steps + 1});
        q.push({curr.x - 1, curr.y, curr.steps + 1});
        q.push({curr.x, curr.y + 1, curr.steps + 1});
        q.push({curr.x, curr.y - 1, curr.steps + 1});
    }

    return -1;  // Players cannot meet
}

int main() {
    int n;
    cin >> n;

    vector<string> grid(n);
    Point player1, player2;

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 'P') {
                if (player1.x == 0) {
                    player1 = {i, j, 0};
                } else {
                    player2 = {i, j, 0};
                }
            }
        }
    }

    int minSteps = findMinSteps(grid, player1, player2);

    cout << minSteps << endl;

    return 0;
}
