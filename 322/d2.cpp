#include <iostream>
#include <vector>
using namespace std;

const int N = 4; // グリッドのサイズ
const int M = 3; // ポリオミノの数

vector<string> grid(N, string(N, '.')); // グリッドの初期化
vector<vector<string>> poliominoes(M); // ポリオミノの形状

bool canPlace(int x, int y, int pIndex) {
    // ポリオミノを(x, y)に配置できるかを判定する関数
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (poliominoes[pIndex][i][j] == '#' && (x + i >= N || y + j >= N || grid[x + i][y + j] == '.')) {
                return false;
            }
        }
    }
    return true;
}

void place(int x, int y, int pIndex, char c) {
    // ポリオミノを(x, y)に配置する関数
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (poliominoes[pIndex][i][j] == '#') {
                grid[x + i][y + j] = c;
            }
        }
    }
}

bool solve(int pIndex) {
    if (pIndex == M) {
        // すべてのポリオミノを配置した場合、成功
        return true;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (canPlace(i, j, pIndex)) {
                // ポリオミノを配置してみる
                place(i, j, pIndex, '#');
                
                // 次のポリオミノを配置する
                if (solve(pIndex + 1)) {
                    return true; // 成功したら終了
                }
                
                // バックトラッキング
                place(i, j, pIndex, '.'); // ポリオミノを取り除く
            }
        }
    }
    
    return false; // このポリオミノを配置できない場合
}

int main() {
    // ポリオミノの形状を読み込む
    for (int i = 0; i < M; i++) {
        poliominoes[i].resize(N);
        for (int j = 0; j < N; j++) {
            cin >> poliominoes[i][j];
        }
    }
    
    if (solve(0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
