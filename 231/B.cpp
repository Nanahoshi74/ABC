#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    map<string,int> mp;
    rep(i,n){
        mp[s[i]]++;
    }
    int max = 0;
    string ans;
    for(auto v : mp){
        if(max < v.second){
            max = v.second;
            ans = v.first;
        }
    }

    cout << ans << endl;



    return 0;
}