#include <bits/stdc++.h>
//#include <atcoder/all>
//using namespace atcoder;
//using mint = modint998244353;
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

bool isvalid(int x, int y, int H, int W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}

int main(){

    ll h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }
    ll N = min(h,w);
    vector<ll> ans(N,0);//サイズをxとしたときx-1番目に格納
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#'){
                ll size = 0;
                rng(k,1,INF){
                    ll ok = 0;
                    if(isvalid(i-k,j+k,h,w)){
                        if(s[i-k][j+k] == '#'){
                            ok++;
                        }
                    }
                    if(isvalid(i+k,j+k,h,w)){
                        if(s[i+k][j+k] == '#'){
                            ok++;
                        }
                    }
                    if(isvalid(i+k,j-k,h,w)){
                        if(s[i+k][j-k] == '#'){
                            ok++;
                        }
                    }
                    if(isvalid(i-k,j-k,h,w)){
                        if(s[i-k][j-k] == '#'){
                            ok++;
                        } 
                    }
                    if(ok != 4){
                        if(size >= 1){
                            ans[size-1]++;
                        }
                        break;
                    }
                    else{
                        size++;
                    }
                }
            }
        }
    }
    rep(i,N){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}