#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    ll ans = 0;
    unordered_set<ll> a,b,c;
    rep(i,10){
        if(s[i] == 'o'){
            a.insert(i);
        }
        else if(s[i] == 'x'){
            b.insert(i);
        }
        else c.insert(i);
    }
    if(a.size() > 4){
        cout << 0 << endl;
        return 0;
    }

    rep(i,10){
        rep(j,10){
            rep(k,10){
                rep(m,10){
                    unordered_set<ll> p = a;
                    if(b.count(i) || b.count(j) || b.count(k) || b.count(m)){
                        continue;
                    }
                    p.erase(i);
                    p.erase(j);
                    p.erase(k);
                    p.erase(m);
                    if(p.size() == 0) ans++;
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}