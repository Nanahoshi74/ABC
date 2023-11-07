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
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { return (x * W + y);}

int main(){

    vector<vector<ll>> s(3,vector<ll>(3));
    rep(i,3){
        rep(j,3){
            cin >> s[i][j];
        }
    }

    long double ans = 0;
    map<ll,P> mp;
    vector<ll> p;
    rep(i,3){
        rep(j,3){
            ll num = getnum(i,j,3,3);
            p.push_back(num);
            mp[num] = pair(i,j);
        }
    }

    sort(all(p));
    long double cnt = 0;

    do{
        vector<vector<ll>> dq(8);
        bool ok = false;
        cnt++;
        rep(i,si(p)){
            // cnt++;
            pair pa = mp[p[i]];
            ll num = s[pa.first][pa.second];

            if(pa.first == 0){
                dq[0].push_back(num);
                if(pa.second == 0){
                    dq[3].push_back(num);
                    dq[6].push_back(num);
                }
                if(pa.second == 1){
                    dq[4].push_back(num);
                }
                if(pa.second == 2){
                    dq[5].push_back(num);
                    dq[7].push_back(num);
                }
            }
            else if(pa.first == 1){
                dq[1].push_back(num);
                if(pa.second == 0){
                    dq[3].push_back(num);
                }
                if(pa.second == 1){
                    dq[4].push_back(num);
                    dq[6].push_back(num);
                    dq[7].push_back(num);
                }
                if(pa.second == 2){
                    dq[5].push_back(num);
                }
            }
            else if(pa.first == 2){
                dq[2].push_back(num);
                if(pa.second == 0){
                    dq[3].push_back(num);
                    dq[7].push_back(num);
                }
                if(pa.second == 1){
                    dq[4].push_back(num);
                }
                if(pa.second == 2){
                    dq[5].push_back(num);
                    dq[6].push_back(num);
                }
            }
            // cnt++;
    
            rep(j,8){
                // ret(1);
                if(si(dq[j]) == 3){
                    // cnt++;
                    // rep(k,3){
                    //     cout << dq[j][k] << " ";
                    // }
                    // cout << endl;
                    // ret(1);
                    if(dq[j][0] == dq[j][1] && dq[j][1] != dq[j][2]){
                        // cout << dq[j][0] << " " << dq[j][1] << " " << dq[j][2] << endl;
                        ans++;;
                        // ret(ans);
                        ok = true;
                        break;
                    }
                }
            }
            if(ok) break;
        }
    }while(next_permutation(all(p)));

    // ret(ans);


    cout << fixed << setprecision(20) << (cnt-ans)/cnt << endl;


    return 0;
}