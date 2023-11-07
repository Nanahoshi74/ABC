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

    ll n,q;
    cin >> n;
    cin >> q;
    map<ll,multiset<ll>> mp;
    map<ll,set<ll>> g;
    rep(i,q){
        ll a,li,lj;
        cin >> a;
        if(a == 1){
            ll li,lj;
            cin >> li >> lj;
            mp[lj].insert(li);
            g[li].insert(lj);
        }
        else{
            ll li;
            cin >> li;
            if(a == 2){
                vector<ll> v;
                while(si(mp[li]) != 0){
                    ll x = *begin(mp[li]);
                    cout << x << " ";
                    v.pb(x);
                    mp[li].erase(mp[li].find(x));
                }
                rep(i,si(v)){
                    mp[li].insert(v[i]);
                }
                cout << endl;
            }
            else if(a == 3){
                vector<ll> v;
                while(si(g[li]) != 0){
                    ll x = *begin(g[li]);
                    cout << x << " ";
                    v.pb(x);
                    g[li].erase(x);
                }
                rep(i,si(v)){
                    g[li].insert(v[i]);
                }
                cout << endl;
            }
        }
    }

    return 0;
}