#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl; return;}
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}

ll n,m;
vector<ll> a(n*n,0);

// マス (x, y) の頂点番号
int getnum(int x, int y, int H, int W) {
    return (x * W + y);
}

// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<int>> &G, vector<bool> &seen,ll c) {
    // 頂点 v を探索済みにする
    seen[v] = true;
    // G[v] に含まれる頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(seen[v2]) {continue;}
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        ll dis = c + 1;
        a[v2] = dis;
        dfs(v2, G, seen,dis);
    }
    return;
}

int main() {
    // 入力を受け取る
    cin >> n >> m;
    a[0] = 0;
    //vector<vector<int>> grid(n, vector<int> (n, 0));    // grid[x][y]：マス (x, y) が白なら 0 、黒なら 1

    vector<vector<int>> G(n * n);   // グラフを表現する隣接リスト
    // グリッドの情報からグラフを作る
    for(int x = 0; x < n; ++x) {
        for(int y = 0; y < n; ++y) {
            // マス (x, y) が白マスなら、何もしない
            int v = getnum(x, y, n, n); // マス (x, y) に対応する頂点番号
            rep(i,n){
                rep(j,n){
                    if((x-i)*(x-i) + (y-j)*(y-j) == m){
                        int u = getnum(i,j,n,n);
                        G[v].pb(u);
                    }
                }
            }
        }
    }

    vector<bool> seen(n * n, false);    // seen[v]：頂点 v が探索済みなら true, そうでないなら false
    //int ans = 0;    // 答えとなる変数
    for(int x = 0; x < n; ++x) {
        for(int y = 0; y < n; ++y) {
            // マス (x, y) が白マスなら、何もしな
            int v = getnum(x, y, n, n);
            // 頂点 v がすでに訪問済みであれば、スキップ
            if(seen[v]) {continue;}
            // そうでなければ、頂点 v を含む連結成分は未探索
            // 深さ優先探索で新たに訪問し、答えを 1 増やす
            dfs(v, G, seen,a[v]);
            //ans++;
        }
    }

    rep(i,n){
        rep(j,n){
            if(seen[getnum(i,j,n,n)]){
                cout << a[getnum(i,j,n,n)] << " ";
            }
            else{
                cout << -1 << " ";
            }
        }
        cout << endl;
    }



    return 0;
}