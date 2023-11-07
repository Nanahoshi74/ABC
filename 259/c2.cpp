#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s,t;
    cin >> s;
    cin >> t;
    vector<pair<char,ll>> s2,t2;

    ll s_count = 1;
    ll t_count = 1;

    rep(i,s.size()-1){
        if(s[i] == s[i+1]){
            s_count++;
        }
        else{
            s2.emplace_back(s[i],s_count);
            s_count = 1;
        }
    }
    s2.emplace_back(s[s.size()-1],s_count);
    rep(i,t.size()-1){
        if(t[i] == t[i+1]){
            t_count++;
        }
        else{
            t2.emplace_back(t[i],t_count);
            t_count = 1;
        }
    }
    t2.emplace_back(t[t.size()-1],t_count);
    if(s2.size() != t2.size()){
        cout << "No" << endl;
        return 0;
    }

    rep(i,s2.size()){
        if(s2[i].first != t2[i].first){
            cout << "No" << endl;
            return 0;
        }
        else if(s2[i].second == 1){
            if(t2[i].second != 1){
                cout << "No" << endl;
                return 0;
            }
        }
        else if(s2[i].second > t2[i].second){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}