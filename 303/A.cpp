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

bool check(char s,char t){
    if(s == '1'){
        if(t == 'l'){
            return true;
        }
    }
    if(s == 'l'){
        if(t == '1'){
            return true;
        }
    }
    if(s == '0' && t == 'o'){
        return true;
    }
    if(s == 'o' && t == '0'){
        return true;
    }
    if(s == t){
        return true;
    }
    return false;
}


int main(){

    ll n;
    cin >> n;
    string s,t;
    cin >> s;
    cin >> t;
    rep(i,n){
        if(!check(s[i],t[i])){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    

    return 0;
}