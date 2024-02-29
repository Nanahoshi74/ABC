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

    vector<char> p = {'A','B','C','D','E'};
    map<char,ll> mp;
    rep(i,5){
        mp['A' + i] = i;
    }
    string s,t;
    cin >> s;
    cin >> t;

    ll z1 = s[0]-'A';
    string s2;
    s2 += 'A';
    s2 += p[mod(mp[s[1]] - z1, 5)];

    ll z2 = t[0]-'A';
    string t2;
    t2 += 'A';
    t2 += p[mod(mp[t[1]] - z2, 5)];
    // ret(s2)
    // ret(t2)

    bool ok = false;

    if(s2 == "AE"){
        if(t2 == "AE" || t2 == "AB") ok = true;
    }
    else if(s2 == "AB"){
        if(t2 == "AE" || t2 == "AB") ok = true;
    }
    else if(s2 == "AD"){
        if(t2 == "AC" || t2 == "AD") ok = true;
    }
    else if(s2 == "AC"){
        if(t2 == "AD" || t2 == "AC") ok = true;
    }

    if(ok){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    return 0;
}