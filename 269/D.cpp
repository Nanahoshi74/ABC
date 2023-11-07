#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;

//////////////////////////////グリッド版dfs典型///////////////////////////////////////////////////


// 周囲 4 マスを探索するときに使う、差分を表す配列
int dx[6] = {1, 0, -1, 0, 1, -1};
int dy[6] = {0, 1, 0, -1, 1, -1};

// マス (x, y) がグリッド内のマスであるかを判定する
bool isvalid(int x, int y) {
    if(0<= x && x <= 2000 && 0 <= y && y <= 2000) {return true;}
    else {return false;}
}

// マス (x, y) の頂点番号
int getnum(int x, int y,map<pair<ll,ll>,ll> &mp){
    return mp[pair(x,y)];
}

// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<ll>> &G,vector<bool> &seen) {
    // 頂点 v を探索済みにする
    seen[v] = true;
    // G[v] に含まれる頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(seen[v2]) {continue;}
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        dfs(v2, G, seen);
    }
    return;
}

int main() {
    // 入力を受け取る
    int n;
    cin >> n;
    vector<int> lx(n),ly(n);
    map<pair<ll,ll>,ll> mp;
    //set<pair<ll,ll>> st;
    int ans = 0;
    rep(i,n){
        cin >> lx[i] >> ly[i];
        lx[i] += 1000;
        ly[i] += 1000;
        mp[pair(lx[i],ly[i])] = i;
    }
    set<pair<ll,ll>> st;
    ll num = 0;
    vector<vector<int>> grid(2010, vector<int> (2010, 0));    // grid[x][y]：マス (x, y) が白なら 0 、黒なら 1
    rep(i,n){
        grid[lx[i]][ly[i]] = 1;
    }

    vector<vector<ll>> G(n);   // グラフを表現する隣接リスト
    // グリッドの情報からグラフを作る
    for(int x = -1000; x <= 1000; ++x) {
        for(int y = -1000; y <= 1000; ++y) {
            // マス (x, y) が白マスなら、何もしない
            int px = x + 1000;
            int py = y + 1000;
            if(grid[px][py] == 0) {continue;}
            int v = getnum(px, py,mp); // マス (x, y) に対応する頂点番号
            // マス (x, y) の上下左右のマスを探索
            for(int d = 0; d < 6; ++d) {
                int nx = px + dx[d], ny = py + dy[d];
                // マス (nx, ny) が盤内にあり、黒マスならば、対応する頂点同士を辺で結ぶ
                if(isvalid(nx, ny)) {
                    if(grid[nx][ny] == 0) {continue;}
                    int nv = getnum(nx, ny, mp);  // マス (nx, ny) に対応する頂点番号
                    // 頂点 v から頂点 nv への辺を張る
                    G[v].push_back(nv);
                    // ダブルカウントされないよう、頂点 nv から頂点 v への辺は入れない
                }
            }
        }
    }

    vector<bool> seen(n, false);    // seen[v]：頂点 v が探索済みなら true, そうでないなら false
    //int ans = 0;    // 答えとなる変数
    for(int x = -1000; x <= 1000; ++x) {
        for(int y = -1000; y <= 1000; ++y) {
            // マス (x, y) が白マスなら、何もしない
            int px = x + 1000;
            int py = y + 1000;
            if(grid[px][py] == 0) {continue;}

            int v = getnum(px, py, mp);
            // 頂点 v がすでに訪問済みであれば、スキップ
            if(seen[v]) {continue;}
            // そうでなければ、頂点 v を含む連結成分は未探索
            // 深さ優先探索で新たに訪問し、答えを 1 増やす
            dfs(v, G, seen);
            ans++;
        }
    }
    // 答えを出力する
    cout << ans << endl;

	return 0;
}
