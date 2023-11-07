#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s,t;
    cin >> s;
    cin >> t;

    vector<pair<ll,char>> p;

    rep(i,t.size()-1){
        if(t[i] != t[i+1]){
            p.emplace_back(i,t[i]);
        }
    }
    p.emplace_back(t.size()-1,t[t.size()-1]);

    ll count = 1;
    ll j = 0;

    rep(i,s.size()-1){
        if(s[i] == s[i+1]){
            count++;
        }
        else if(count >= 1 && s[i] != s[i+1]){
            count = 1;
            j++;
            if(p[j].second == s[i] && p[j].first >= i){
                continue;
            }
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}