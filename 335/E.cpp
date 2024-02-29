#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
//using mint = modint1000000007;
// using mint = modint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i,a,b) for(ll i = a; i <= (ll)(b); i++)
#define rng(i,a,b) for(ll i = a; i < (ll)(b); i++)
#define rrng(i,a,b) for(ll i = a; i >= (ll)(b); i--)
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl;}
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}
char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}
ll ceil(ll x , ll y){return (x+y-1)/y;}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<vector<P>> G(n);
    rep(i,m){
        ll A,B;
        cin >> A >> B;
        A--,B--;
        G[A].emplace_back(B,1);
        G[B].emplace_back(A,1);
    }
    vector<ll> cur(n,0);
    vector<bool> seen(n,false);
    cur[0] = 1;
    unordered_set<ll> st;
    st.insert(a[0]);
    // priority_queue<P> pq;
    priority_queue<P,vector<P>,greater<P>> pq;
    pq.emplace(cur[0],0);
    while(!pq.empty()){
        ll pos = pq.top().second; pq.pop();
        if(seen[pos]) continue;
        seen[pos] = true;
        rep(i,si(G[pos])){
            ll next = G[pos][i].first;
            ll cost = G[pos][i].second;
            ll next2 = next -1;
            ll pos2 = pos -1;
            if(a[next2] < a[pos2]){
                st.insert(a[next2]);
                // cur[next] = cur[pos];
                cur[next] = 0;
                pq.emplace(cur[next], next);
            }
            else{
                ll x = 0;
                if(!st.count(a[next2])){
                    st.insert(a[next2]);
                    st.insert(a[pos2]);
                    x++;
                }
                cur[next] = max(cur[next],cur[pos] + x);
                pq.emplace(cur[next], next);
            }
        }
    }

    cout << cur[n-1] << endl;

    return 0;
}