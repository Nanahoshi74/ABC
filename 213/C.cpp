#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
int main(){

    ll h,w,n;
    cin >> h >> w >> n;
    vector<P> p(n),k(n);
    vector<P> ans(n);
    map<P,ll> mp;
    rep(i,n){
        cin >> p[i].first >> p[i].second;
        p[i].first--; p[i].second--;
        mp[p[i]] = i;
        k[i].first = p[i].second; k[i].second = p[i].first;
    }
    sort(all(p));
    sort(all(k));
    rep(i,n){
        ll m = k[i].first;
        k[i].first = k[i].second;
        k[i].second = m;
    }
    ans[mp[p[0]]].first = 0; ans[mp[k[0]]].second = 0;
    rep(i,n-1){
        if(p[i].first != p[i+1].first){
            ans[mp[p[i+1]]].first = ans[mp[p[i]]].first + 1;
        }
        else{
            ans[mp[p[i+1]]].first = ans[mp[p[i]]].first;
        }
        if(k[i].second != k[i+1].second){
            ans[mp[k[i+1]]].second = ans[mp[k[i]]].second + 1;
        }
        else{
            ans[mp[k[i+1]]].second = ans[mp[k[i]]].second;
        }
    }
    rep(i,si(ans)){
        cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
    }
   

    return 0;
}