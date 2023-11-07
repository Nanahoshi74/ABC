#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
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

    ll n1,n2,m;
    cin >> n1 >> n2 >> m;
    vector<vector<ll>> G(n1 + n2 + 1);

    dsu uf(n1 + n2 + 1);

    rep(i,m){
        ll a,b;
        cin >> a >> b;
        // a--,b--;
        uf.merge(a,b);
        G[b].push_back(a);
        G[a].push_back(b);
    }
    vector<ll> dist1(n1 + n2 + 1,-1);
    queue<ll> q;
    dist1[1] = 0;
    q.push(1);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int nv : G[v]){
            if(dist1[nv] != -1) continue;
            dist1[nv] = dist1[v] + 1;
            q.push(nv);
        }
    }
    ll s = 0;
    ll cnt1 = -1;
    // rep(i,n1 + n2 + 1){
    //     cout << dist1[i] << " ";
    // }
    // cout << endl;

    vector<ll> dist2(n1 + n2 + 1,-1);
    queue<ll> q2;
    dist2[n1 + n2] = 0;
    q2.push(n1 + n2);
    while(!q2.empty()){
        int v = q2.front();
        q2.pop();
        for(int nv : G[v]){
            if(dist2[nv] != -1) continue;
            dist2[nv] = dist2[v] + 1;
            q2.push(nv);
        }
    }
    // cout << endl;
    rng(i,1,n1+1){
        if(dist1[i] != -1){
            if(cnt1 < dist1[i]){
                cnt1 = dist1[i];
                s = i;
            }
        }
    }



    ll e = 0;
    ll cnt2 = -1;
    rng(i,n1+1,n1+n2+1){
         if(dist2[i] != -1){
            if(cnt2 < dist2[i]){
                cnt2 = dist2[i];
                e = i;
            }
        }
    }
    //  rep(i,n1 + n2 + 1){
    //     cout << dist2[i] << " ";
    // }
    // cout << endl;

    cout << cnt1 + cnt2 + 1 << endl;






    return 0;
}