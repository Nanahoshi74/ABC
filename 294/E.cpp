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

    ll L,N1,N2;
    cin >> L >> N1 >> N2;
    vector<pair<ll,ll>> p(N1),q(N2);
    rep(i,N1){
        cin >> p[i].first >> p[i].second;
    } 
    rep(i,N2){
        cin >> q[i].first >> q[i].second;
    }
    ll a = 0, b = 0, c = 0, d = 0;
    ll ans = 0;
    while(true){
        // cout << a << " " << b << " " << c << " " << d << "ans = ";
        if(a == N1 && b == N2){
            break;
        }
        if(p[a].second + c < q[b].second + d){
            // if(p[a].first == q[b].first){
            //     ans += min(p[a].second,q[b].second);
            // }
            ll over = min((c + p[a].second),(d + q[b].second)) - max(c,d);
            if(over > 0 && p[a].first == q[b].first){
                ans += over;
            }
            c += p[a].second;
            // if(p[a].first == q[b].first){
            //     ans += ((d + q[b].second) - c);
            // }
            a++;
        }
        else if(p[a].second + c > q[b].second + d){
            // if(p[a].first == q[b].first){
            //     ans += min(p[a].second,q[b].second);
            // }
            ll over = min((c + p[a].second),(d + q[b].second)) - max(c,d);
            if(over > 0 && p[a].first == q[b].first){
                ans += over;
            }
            d += q[b].second;
            // if(p[a].first == q[b].first){
            //     ans += ((c + p[a].second) - d);
            // }
            b++;
        }
        else{
            
            c = p[a].second + c, d = q[b].second + d;
            ll over = min((c + p[a].second),(d + q[b].second)) - max(c,d);
            if(over > 0 && p[a].first == q[b].first){
                ans += over;
            }
            // if(p[a].first == q[b].first){
            //     ans += min(p[a].second,q[b].second);
            // }
            a++,b++;
        }
        // ret(ans);
        // cout << a << " " << b << endl;
        if(a == N1 && b == N2){
            break;
        }
    }

    cout << ans << endl;
    

    return 0;
}