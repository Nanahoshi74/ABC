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

    ll n,m,h,k;
    cin >> n >> m >> h >> k;
    vector<P> pa(m);
    string s;
    cin >> s;
    set<P> st;
    rep(i,m){
        cin >> pa[i].first >> pa[i].second;
        st.insert(pair(pa[i].first,pa[i].second));
    }
    ll cnt = 0;
    ll x = 0,y = 0;
    ll li = 0;
    while(h >= 0){
        if(cnt >= n && h >= 0){
            cout << "Yes" << endl;
            return 0;
        }
        if(s[li] == 'R'){
            x++;
        }
        else if(s[li] == 'L'){
            x--;
        }
        else if(s[li] == 'U'){
            y++;
        }
        else{
            y--;
        }
        cnt++;
        h--;
        li++;
        if(cnt >= n && h >= 0){
            cout << "Yes" << endl;
            return 0;
        }
        if(h < 0){
            cout << "No" << endl;
            return 0;
        }
        if(st.count(pair(x,y))){
            if(h < k){
                h = k;
                st.erase(pair(x,y));
            }
        }
        if(cnt >= n && h >= 0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    


    return 0;
}