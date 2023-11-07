#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    ll ans = 0;
    vector<ll> p;
    rep(i,3){
        if(s[i] == 'R') ans++;
        else ans = 0;
        p.push_back(ans);
    }
    cout << *max_element(p.begin(),p.end()) << endl;


    return 0;
}