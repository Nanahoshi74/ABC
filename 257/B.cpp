#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k,q;
    cin >> n >> k >> q;

    vector<ll> a(k),l(q);
    rep(i,k) cin >> a[i];
    rep(i,q){
        cin >> l[i];
        l[i]--;
    }
    //vector<ll> ans(k);
    rep(i,q){
        bool ok = false;
        if(a[l[i]] == n){
            continue;
        }
        else{
            rep(j,k){
                if(a[l[i]]+1 == a[j]){
                    ok = true;
                    break;
                }
            }
            if(!ok){
                a[l[i]]++;
            }
        }
    }

    rep(i,k){
        cout << a[i] << " ";
    }

    cout << endl;




    return 0;
}