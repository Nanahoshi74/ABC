#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> s(n),t(n);
    bool ans = true;
    int ok;
    rep(i,n) cin >> s[i] >> t[i];

    rep(i,n){
        bool ok1 = true;
        bool ok2 = true;
        rep(j,n){
            if(s[i] == s[j] || s[i] == t[j]){
                rep(j1,n){
                    if(j1 != i){
                        if(t[i] == s[j1] || t[i] == t[j1]){
                            ok1 = false;;
                        }
                    }
                }
            }
            if(t[i] == t[j] || t[i] == s[j]){
                rep(j1,n){
                    if(j1 != i){
                        if(s[i] == t[j1] || s[i] == s[j1]){
                            ok2 = false;
                        }
                    }
                }
            }
        }
        if(ok1 == false && ok2 == false){
            cout << "No" << endl;
            return 0;
        }
    }

    
    cout << "Yes" << endl;
    return 0;
}