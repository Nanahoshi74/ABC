#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

bool valid(ll a,ll b){
    if(a >= 0 && a < 3 && b >= 0 && b < 3){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    vector a(3,vector<ll>(3));
    rep(i,3){
        rep(j,3){
            cin >> a[i][j];
        }
    }
    ll n;
    cin >> n;
    vector<ll> b(n);
    unordered_set<ll> st;
    rep(i,n){
        cin >> b[i];
        st.insert(b[i]);
    }
    vector v(3,vector<bool>(3,false));
    rep(i,3){
        rep(j,3){
            if(st.count(a[i][j])){
                v[i][j] = true;
            }
        }
    }
    rep(i,3){
        rep(j,3){
            bool ok = true;
            if(v[i][j]){
                rep(k,3){
                    if(valid(i,j+k)){
                        if(!v[i][j+k]){
                            ok = false;
                        }
                    }
                    else{
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    cout << "Yes" << endl;
                    return 0;
                }
                ok = true;
                rep(k,3){
                    if(valid(i+k,j+k)){
                        if(!v[i+k][j+k]){
                            ok = false;
                        }
                    }
                    else{
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    cout << "Yes" << endl;
                    return 0;
                }
                ok = true;
                rep(k,3){
                    if(valid(i+k,j)){
                        if(!v[i+k][j]){
                            ok = false;
                        }
                    }
                    else{
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    cout << "Yes" << endl;
                    return 0;
                }
                ok = true;
                rep(k,3){
                    if(valid(i-k,j+k)){
                        if(!v[i-k][j+k]){
                            ok = false;
                        }
                    }
                    else{
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;



    return 0;
}