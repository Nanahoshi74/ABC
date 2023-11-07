#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
//using mint = modint998244353;
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

    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<P> comp(n);
    rep(i,n){
        comp[i] = {a[i],i};
    }
    sort(all(comp));
    vector<ll> order(n);
    rep(i,n) order[comp[i].second] = i;

    segtree<Monoid,op,e> seg(n);

    auto f = [&](Monoid x) -> bool{
        return x.first <= k;
    };

    auto push = [&](ll x,int id) -> void{
        seg.set(id,Monoid(1,x));
    };

    auto pop = [&](ll x,int id) -> void{
        seg.set(id,e());
    };

    auto get = [&]() -> ll{
        int r = seg.max_right(0,f);
        return seg.prod(0,r).second;
    };

    rep(i,m){
        push(a[i],order[i]);
    }

    rep(i,n-m+1){
        cout << get() << " ";
        if(i + m < n){
            push(a[i+m],order[i+m]);
            pop(a[i],order[i]);
        }
    }

    cout << endl;


    return 0;
}