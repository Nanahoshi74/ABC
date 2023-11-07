#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
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

using Monoid = P;

Monoid op(Monoid a,Monoid b){
    return {a.first + b.first,a.second + b.second};
};

Monoid e(){
    return {0,0};
}


int main(){

    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> x(q),y(q);
    segtree<Monoid,op,e> seg(n);
    auto f = [&](Monoid x) -> bool{
        return x.first <= k;
    };

    auto push = [&](ll x,ll id) -> void{
        seg.set(id,Monoid(1,x));
    };

    auto pop = [&](ll x,ll id) -> void{
        seg.set(id,e());
    };

    auto get = [&]() -> ll{
        ll r = seg.max_right(0,f);
        return seg.prod(0,r).second;
    };

    rep(i,n){
        push(0,i);
    }
    vector<ll> u(n,0);
    rep(i,q){
        cin >> x[i] >> y[i];
        x[i]--;
        u[x[i]] = y[i];
        cout << get() << "\n";
    }





    return 0;
}