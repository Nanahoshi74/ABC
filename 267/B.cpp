#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    map<ll,vector<ll>> mp;
    mp[0].push_back(7);
    mp[1].push_back(4);
    mp[2].push_back(2);
    mp[2].push_back(8);
    mp[3].push_back(1);
    mp[3].push_back(5);
    mp[4].push_back(3);
    mp[4].push_back(9);
    mp[5].push_back(6);
    mp[6].push_back(10);

    rep(i,7){
        bool ok = false;
        bool ok2 = true;
        bool ans = false;
        bool m = false;
        ll p;
        rep(j,mp[i].size()){
            if(s[mp[i][j]-1] == '1'){
                ok = true;
            }
        }
        rng(j,i+1,7){
            rep(k,mp[j].size()){
                if(s[mp[j][k]-1] != '0'){
                    ok2 = false;
                    m = true;
                    break;
                }
            }
            if(ok2){
                p = j;
                break;
            }
        }
        if(ok && ok2){
            rng(j,p+1,7){
                rep(k,mp[j].size()){
                    if(s[mp[j][k]-1] == '1'){
                        ans = true;
                    }
                }
            }
        }
        if(ok && ok2 && ans && s[0] == '0'){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}