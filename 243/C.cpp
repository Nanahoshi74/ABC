#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }
    string s;
    cin >> s;
    map<int,vector<int>> mp;
    rep(i,n){
        mp[y[i]].push_back(i);
    }
    for(auto p : mp){
        vector<int> ids = p.second;
        vector<pair<int,char>> ps;
        for(int i : ids){
            ps.emplace_back(x[i],s[i]);
        }
        sort(ps.begin(),ps.end());
        int len = ps.size();
        rep(i,len-1){
            if(ps[i].second == 'R' && ps[i+1].second == 'L'){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;



    return 0;
}