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

int main(){

    ll n,t,m;
    cin >> n >> t >> m;
    vector<ll> a(m),b(m);
    set<P> pa;
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--,b[i]--;
        pa.insert(pair(a[i],b[i]));
        pa.insert(pair(b[i],a[i]));
    }
    vector<ll> tmp(n);
    rep(i,n){
        tmp[i] = i;
    }
    ll ans = 0;
    // unordered_set<unordered_set<unordered_set<ll>>> sp;
    do{
        rep(i,1 << (n-1)){
            ll cut = -1;
            vector<unordered_set<ll>> st;
            vector<ll> p;
            rep(j,n-1){
                if(i & (1 << j)){
                    p.pb(j);
                }
            }
            // rep(e,si(p)){
            //     cout << p[e] << " ";
            // }
            // cout << endl;
            // unordered_set<unordered_set<ll>> ssp;
            rep(k,si(p)){
                unordered_set<ll> g;
                if(cut == -1){
                    for(int v = 0; v <= p[k]; v++){
                        g.insert(tmp[v]);
                    }
                    cut = p[k];
                    st.push_back(g);
                    // ssp.insert(g);
                }
                else{
                    for(int v = cut + 1; v <= p[k]; v++){
                        g.insert(tmp[v]);
                    }
                    cut = p[k];
                    st.push_back(g);
                    // ssp.insert(g);
                }
            }
            unordered_set<ll> r;
            if(si(p) == 0){
                if(m == 0){
                    ans++;
                    continue;
                }
                else{
                    continue;
                }
            }
            for(int k = cut + 1; k < n; k++){
                r.insert(tmp[k]);
            }
            st.push_back(r);
            // ssp.insert(r);
            // if(sp.count(ssp)){
            //     continue;
            // }
            // for(auto z : st){
            //     for(auto t : z){
            //         cout << t << " ";
            //     }
            //     cout << endl;
            // }
            bool ok = true;
            for(auto q : st){
                unordered_set<ll> gt = q;
                for(auto h : gt){
                    for(auto w : gt){
                        if(h == w) continue;
                        if(pa.count(pair(h,w))){
                            ok = false; 
                        }
                    }
                }
            }
            if(ok){
                ans++;
            }
        }
    }while(next_permutation(all(tmp)));

    cout << ans << endl;


    return 0;
}