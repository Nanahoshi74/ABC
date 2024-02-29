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
ll ceilLL(ll x , ll y){return (x+y-1)/y;}
// 多倍長テンプレ
/* ---------------------- ここから ---------------------- */
// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// // 任意長整数型
// using Bint = mp::cpp_int;
// // 仮数部が10進数で1024桁の浮動小数点数型(TLEしたら小さくする)
// using Real = mp::number<mp::cpp_dec_float<1024>>;
// /* ---------------------- ここまで ---------------------- */

int main(){

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll q;
    cin >> q;

    map<char, vector<ll>> mp;

    rep(i,n){
        mp[s[i]].push_back(i);
    }

    while(q--){
        char c, d;
        cin >> c >> d;
        if(c == d || !mp.count(c)) continue;
        if(si(mp[c]) > si(mp[d])){
            for(auto z : mp[d]){
                mp[c].push_back(z);
            }
            mp[d].clear();
            swap(mp[d], mp[c]);
        }
        else{
            for(auto z : mp[c]){
                mp[d].push_back(z);
            }
            mp[c].clear();
        }
    //     for(auto g : mp){
    //     cout << g.first << endl;
    //     rep(i,si(g.second)){
    //         cout << g.second[i] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "//////////////////////" << endl;
    }
    string ans;
    for(auto z : mp){
        vector<ll> &d = z.second;
        if(si(d) == 0) continue;
        for(auto i : d){
            s[i] = z.first;
        }
    }

    cout << s << endl;

    return 0;
}