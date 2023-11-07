#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string x;
    int n;
    cin >> x >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    map<char,char> f,g;
    rep(i,26) f[x[i]] = 'a' + i;
    rep(i,26) g['a' + i] = x[i];
    rep(i,n){
        for(char & c : s[i]) c = f[c];
    }
    sort(s.begin(),s.end());
    rep(i,n){
        for(char & c : s[i]) c = g[c];
    }
    rep(i,n) cout <<  s[i] << endl;


    return 0;
}