#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    map<char,ll> mp;
    rep(i,3) mp[s[i]]++;

    for(auto p : mp){
        if(p.second == 1) {cout << p.first << endl; 
        return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}