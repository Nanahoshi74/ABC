#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define em emplace_back
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

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    ll q,p;
    cin >> q;
    p = 0;
    set<ll> st;
    bool ok = false;
    vector<bool> seen(n,false);
    rep(i,q){
        ll k;
        cin >> k;
        if(k == 1){
            ll b;
            cin >> b;
            st.clear();
            p = b;
            ok = true;
            seen.assign(n,false);
        }
        else if(k == 2){
            ll b,c;
            cin >> b >> c;
            b--;
            if(ok && !seen[b]){
                a[b] = p + c;
                seen[b] = true;
                st.insert(b);
            }
            else{
                a[b] += c;
            }
        }
        else{
            ll b;
            cin >> b;
            b--;
            if(ok & !seen[b]){
                cout << p << endl;
            }
            else{
                cout << a[b] << endl;
            }
        }
        if(si(st) == n){
            ok = false;
        }
    }


    return 0;
}