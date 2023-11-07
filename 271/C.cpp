#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl; return;}
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
    multiset<ll> st;
    rep(i,n){
        cin >> a[i];
        st.insert(a[i]);
    }
    sort(all(a));
    ll ans;
    if(si(st) > 1 || a[0] == 1){
        ans = 1;
    }
    else{
        ans = 0;
    }
    vector<ll> b(n);
    iota(all(b),1);
    if(a == b){
        cout << a[n-1] << endl;
        return 0;
    }

    if(si(st) == 1){
        if(a[0] == 1 && a[1] != 1){
            cout << 1 << endl;
            return 0;
        }
        else{
            cout << 0 << endl;
            return 0;
        }
    }
    rng(i,1,n){
        if(si(st) == 0){
            cout << ans-1 << endl;
            return 0;
        }
        if(a[i] == (a[i-1] + 1)){
            ans++;
        }
        else{
            ll cnt = 0;
            while(true){  
            ll p = *rbegin(st);
            st.erase(st.find(p));
            ans++;
            if(si(st) == 0){
                cout << ans-1 << endl;
                return 0;
            }
            ll k = *rbegin(st);
            st.erase(st.find(k));
            if(si(st) == 0){
                cout << ans << endl;
                return 0;
            }
            if(a[i] == a[i-1]){
                if(cnt == 1){
                    break;
                }
            }
            else{
                if(cnt == (a[i]-a[i-1]-1)){
                    break;
                }
            }
            cnt++;
            }
        }
    }

    cout << ans-1 << endl;


    return 0;
}