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

ll ans = 0;
ll h,w;
vector<string> s(h);
int getnum(int li,int lj){
    return (li * w + lj);
}

bool isvalid(int x, int y) {
    if(0 <= x && x < h && 0 <= y && y < w) {return true;}
    else {return false;}
}

void dfs(ll v,vector<vector<ll>>&g,vector<bool>&seen){
    seen[v] = true;
    ans++;
    for(auto next_v : g[v]){
        if(seen[next_v]){
            continue;
        }
        else{
            dfs(next_v,g,seen);
        }
    }
}

void f(ll li,ll lj,vector<vector<ll>>&g){
    if(isvalid(li,lj)){
        if(s[li][lj] == '#'){
            return;
        }
        else{
            ll v = getnum(li,lj);
            if(isvalid(li+1,lj)){
                if(s[li+1][lj] == '.'){
                    g[v].push_back(getnum(li+1,lj));
                    
                }
            }
            if(isvalid(li,lj+1)){
                if(s[li][lj+1] == '.'){
                    g[v].push_back(getnum(li,lj+1));
                }
            }
            if(isvalid(li-1,lj)){
                if(s[li-1][lj] == '.'){
                    g[v].push_back(getnum(li-1,lj));
                }
            }
            if(isvalid(li,lj-1)){
                if(s[li][lj-1] == '.'){
                    g[v].push_back(getnum(li,lj-1));
                }
            }
        }
    }
}

int main(){

    cin >> h >> w;
    // vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }
    vector<vector<ll>> g(h * w);
    vector<bool> seen(h * w,false);
    ll start = getnum(1,1);
    f(1,1,g);
    dfs(start,g,seen);
    cout << ans << endl;


    return 0;
}