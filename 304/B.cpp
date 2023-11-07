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

    string s;
    cin >> s;
    ll n = stoll(s);
    if(n <= 1e3-1){
        cout << s << endl;
        return 0;
    }
    else if(n >= 1e3 && 1e4-1 >= n){
        rng(i,si(s)-1,si(s)){
            s[i] = '0';
        }
        cout << s << endl;
        return 0;
    }
    else if(n >= 1e4 && 1e5-1 >= n){
        rng(i,si(s)-2,si(s)){
            s[i] = '0';
        }
        cout << s << endl;
        return 0;
    }
    else if(n >= 1e5 && 1e6-1 >= n){
        rng(i,si(s)-3,si(s)){
            s[i] = '0';
        }
        cout << s << endl;
    }
     else if(n >= 1e6 && 1e7-1 >= n){
        rng(i,si(s)-4,si(s)){
            s[i] = '0';
        }
        cout << s << endl;
        return 0;
    }
    else if(n >= 1e7 && 1e8-1 >= n){
        rng(i,si(s)-5,si(s)){
            s[i] = '0';
        }
        cout << s << endl;
        return 0;
    }
    else if(n >= 1e8 && 1e9-1 >= n){
        rng(i,si(s)-6,si(s)){
            s[i] = '0';
        }
        cout << s << endl;
        return 0;
    }


    return 0;
}