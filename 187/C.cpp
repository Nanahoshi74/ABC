#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<string> s(n);
    map<string,bool> p,q;
    rep(i,n){
        cin >> s[i];
        if(s[i][0] == '!'){
            p[s[i].substr(1)] = true;
        }
        else{
            q[s[i]] = true;
        }
    }
    rep(i,n){
        string l;
        if(s[i][0] == '!'){
            l = s[i].substr(1);
        }
        else{
            l = s[i];
        }
        if(p[s[i]] && q[s[i]]){
            cout << l << endl;
            return 0;
        }
        else continue;
    }

    cout << "satisfiable" << endl;

    return 0;
}