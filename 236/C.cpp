#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){
    ll n,m;
    cin >> n >> m;

    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<string> t(m);
    rep(i,m) cin >> t[i];

    set<string> rapid(t.begin(),t.end());

    rep(i,n){
        if(rapid.count(s[i])){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }


    
    return 0;
}