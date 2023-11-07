#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,q;
    cin >> n >> q;
    vector<ll> x(q);
    rep(i,q){
        cin >> x[i];
    }
    map<ll,ll> mp;
    rep(i,n){
        mp[i] = i+1;
    }
    rep(i,q){
        int d;
        for(auto &p : mp){
            int c = p.second;
            if(x[i] == c){
                d = p.first;
                break;
            }
        }
        if(d == n-1){
        swap(mp[d],mp[d-1]);
        }
        else{
        swap(mp[d],mp[d+1]);
        }
    }

    for(auto p : mp){
        cout << p.second << endl;
    }


    return 0;
}