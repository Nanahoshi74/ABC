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

    ll q;
    cin >> q;
    //vector<P> p;
    deque<P> p;
    rep(i,q){
        ll a;
        cin >> a;
        if(a == 1){
            ll x,c;
            cin >> x >> c;
            p.emplace_back(x,c);
        }
        else{
            ll c;
            cin >> c;
            ll ans = 0;
            while(true){
                if(c == 0) break;
                if(p.front().second <= c){
                    c -= p.front().second;
                    ans += p.front().second * p.front().first;
                    p.front().second = 0;
                }
                else{
                    ans += c * p.front().first;
                    p.front().second -= c;
                    c = 0;
                }
                if(p.front().second == 0){
                    p.pop_front();
                }
                if(c == 0) break;
            }
            cout << ans << endl;
        }
    }

    return 0;
}