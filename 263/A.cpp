#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(5);
    rep(i,5) cin >> a[i];

    map<ll,ll> mp;
    rep(i,5){
        mp[a[i]]++;
    }
    bool b,c;
    b = false; c = false;
    rep(i,14){
        if(mp[i] == 3) b = true;
        else if(mp[i] == 2) c = true;
    }
    if(b && c){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}