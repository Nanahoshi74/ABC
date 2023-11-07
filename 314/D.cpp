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

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll q;
    cin >> q;
    unordered_set<ll> u,v;
    // rep(i,n){
    //     if(s[i] >= 'A' && s[i] <= 'Z'){
    //         v.insert(i);
    //     }
    //     else{
    //         u.insert(i);
    //     }
    // }
    ll z = 0;
    rep(i,q){
        ll t,x;
        char c;
        cin >> t >> x >> c;
        x--;
        if(t == 1){
            s[x] = c;
            if(z == 1){
                if(c >= 'A' && c <= 'Z'){
                    u.insert(x);
                }
                else{
                    
                }
            }
            else if(z == 2){
                if(c >= 'A' && c <= 'Z'){
                    
                }
                else{
                    v.insert(x);
                }
            }
        }
        else if(t == 2){
            z = 1;
            u.clear();
            v.clear();
        }
        else{
            z = 2;
            u.clear();
            v.clear();
        }
    }
    if(z == 0){
        cout << s << endl;
        return 0;
    }
    else if(z == 1){
        rep(i,n){
            s[i] = tolower(s[i]);
            if(u.count(i)){
                s[i] = toupper(s[i]);
            }
        }
    }
    else{
        rep(i,n){
            s[i] = toupper(s[i]);
            if(v.count(i)){
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}