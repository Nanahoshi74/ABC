#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    map<char,vector<ll>> mp;
    vector<set<ll>> st(10);
    rep(i,n){
        rep(j,10){
            mp[s[i][j]].push_back(j);
        }
    }

   
    vector<ll> v(10,0);
    for(auto & p : mp){
        vector<ll>& w = p.second;
        sort(w.begin(),w.end());
        ll x = 0
        char c = p.first;
        int i = c - '0'; 
            v[i] = x;
            rep(j,n){
                if(st[i].count(w[j])){
                    v[i] += 10;
                }
                st[i].insert(w[j]);
            }
    }

    cout << *min_element(v.begin(),v.end()) << endl;;


    return 0;
}