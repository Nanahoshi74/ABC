#include <bits/stdc++.h>
//#include <atcoder/all>
//using namespace atcoder;
//using mint = modint998244353;
//using mint = modint1000000007;
// using mint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl;}
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}
char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}

string t = "snuke";


int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// マス (x, y) の頂点番号
int getnum(int x, int y, int H, int W) {
    return (x * W + y);
}


// マス (x, y) がグリッド内のマスであるかを判定する
bool isvalid(int x, int y, int H, int W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}
// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<int>> &G, vector<bool> &seen,map<ll,char> &mp) {
    // 頂点 v を探索済みにする
    seen[v] = true;
    // G[v] に含まれる頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(seen[v2]) {continue;}
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        dfs(v2, G, seen,mp);
    }
    return;
}

int main() {
    // 入力を受け取る
    int H, W; cin >> H >> W;
    vector<string> s(H);
    map<ll,char> mp;
    rep(i,H){
        cin >> s[i];
    }
    rep(i,H){
        rep(j,W){
            mp[getnum(i,j,H,W)] = s[i][j];
        }
    }

    vector<vector<int>> G(H * W);   // グラフを表現する隣接リスト
    vector<bool> seen(H*W,false);
    // グリッドの情報からグラフを作る
    for(int x = 0; x < H; ++x) {
        for(int y = 0; y < W; ++y) {

            int v = getnum(x, y, H, W); // マス (x, y) に対応する頂点番号
            // マス (x, y) の上下左右のマスを探索
            for(int d = 0; d < 4; ++d) {
                int nx = x + dx[d], ny = y + dy[d];
                // マス (nx, ny) が盤内にあり、黒マスならば、対応する頂点同士を辺で結ぶ
                if(isvalid(nx, ny, H, W)) {

                    int nv = getnum(nx, ny, H, W);  // マス (nx, ny) に対応する頂点番号
                    // 頂点 v から頂点 nv への辺を張る
                    bool ok = true;
                    if(s[x][y] == 's'){
                        if(s[nx][ny] != 'n'){
                            ok = false;
                        }
                    }
                     if(s[x][y] == 'n'){
                        if(s[nx][ny] != 'u'){
                            ok = false;
                        }
                    }
                     if(s[x][y] == 'u'){
                        if(s[nx][ny] != 'k'){
                            ok = false;
                        }
                    }
                     if(s[x][y] == 'k'){
                        if(s[nx][ny] != 'e'){
                            ok = false;
                        }
                    }
                     if(s[x][y] == 'e'){
                        if(s[nx][ny] != 's'){
                            ok = false;
                        }
                    }
                    if(ok){
                        G[v].push_back(nv);
                    }
                    
                    // ダブルカウントされないよう、頂点 nv から頂点 v への辺は入れない
                }
            }
        }
    }

    dfs(getnum(0,0,H,W),G,seen,mp);
    if(s[0][0] == 's' && seen[getnum(H-1,W-1,H,W)]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    


    

    return 0;
}