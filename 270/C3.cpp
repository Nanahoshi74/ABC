#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 辺情報を表す構造体
struct edge {
    int to;     // 辺の終点
    int leng;   // 辺の重み
};

const int INF = 1e9;    // 初期化で使う十分大きな数

int main() {
    // 入力を受け取る
    int N, x,y; cin >> N >> x >> y;
    vector<vector<edge>> G(N);  // G[i]：頂点 i を始点とする辺情報を格納する
    for(int i = 0; i < N-1; ++i) {
        int u, v; cin >> u >> v;
        u--; v--;
        G[u].push_back({v, 1});
        G[v].push_back({u,1});
    }

    vector<int> dist(N, INF);   // dist[i]：頂点 0 から頂点 i への暫定的な経路長
    dist[0] = 0;
    vector<bool> done(N, false);    // done[i]：頂点 i の最短距離が確定しているか

    // (仮の最短距離、頂点番号) を管理するヒープ
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    // ヒープに最初の時点における情報を入れておく
    for(int v = 0; v < N; ++v) {
        pq.emplace(dist[v], v);
    }

    while(pq.size() > 0) {
        // ヒープの先頭要素を取り出す (v は頂点番号、d は 0 → v の仮の最短距離)
        auto [d, v] = pq.top();
        pq.pop();
        // 頂点 v の最短距離がすでに確定しているなら、何もしない
        if(done[v]) {continue;}

        // 頂点 v を始点とする辺 e について、更新を行う
        for(auto e : G[v]) {
            if(dist[e.to] > dist[v] + e.leng) {
                // 距離の更新がある場合には、ヒープに更新後の情報を入れる
                dist[e.to] = dist[v] + e.leng;
                pq.emplace(dist[e.to], e.to);
            }
        }
        // 頂点 v の最短距離を確定させる
        done[v] = true;
    }

    // 答えを出力する
    for(int i = 0; i < N; ++i) {
        cout << dist[i] << endl;
    }

	return 0;
}