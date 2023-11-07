#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll h1,w1;
    cin >> h1 >> w1;
    vector<vector<ll>> a(h1,vector<ll>(w1));
    
    rep(i,h1){
        rep(j,w1){
            cin >> a[i][j];
        }
    }
    ll h2,w2;
    cin >> h2 >> w2;
    vector<vector<ll>> b(h2,vector<ll>(w2));
   
    rep(i,h2){
        rep(j,w2){
            cin >> b[i][j];
        }
    }
    rep(hs,1 << h1){
        rep(ws,1 << w1){
            vector<ll> is,js;
            rep(i,h1) if(hs >> i&1) is.push_back(i);
            rep(j,w1) if(ws >> j&1) js.push_back(j);
            if(is.size() != h2) continue;
            if(js.size() != w2) continue;
            vector c(h2,vector<ll>(w2));
            rep(i,h2){
                rep(j,w2){
                    c[i][j] = a[is[i]][js[j]];
                }
            }
            if(b == c){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;


    return 0;
}