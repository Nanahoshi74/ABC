#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,a,b;
    cin >> n >> a >> b;
    string s,t;
    ll p = 0;
    rep(i,n*b){
        rep(j,b){
            s += '.';
        }
        if(s.size() == n*b) break;
        rep(k,b){
            s += '#';
        }
        if(s.size() == n*b) break;
    }
    rep(i,n*b){
        rep(j,b){
            t += '#';
        }
        if(t.size() == n*b) break;
        rep(k,b){
            t += '.';
        }
        if(t.size() == n*b) break;
    }
    int ok = 0;
    rep(i,n*a){
        rep(j,a){
            cout << s << endl;
            ok++;
        }
        if(ok == n*a) break;
        rep(k,a){
            cout << t << endl;
            ok++;
        }
        if(ok == n*a) break;
    }

   

    return 0;
}