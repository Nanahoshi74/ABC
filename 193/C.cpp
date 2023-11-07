#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

ll my_pow(ll a,ll b){
    ll ans = 1;
    rep(i,b){
        ans *= a;
    }
    return ans;
}

int main(){

    ll n;
    cin >> n;

    ll ans = n;
    vector<ll> p(my_pow(10,5));

    iota(p.begin(),p.end(),2);
    unordered_set<ll> st;
    rep(i,p.size()){
        ll j = 2;
        while(true){
            if(my_pow(p[i],j) > n){
                break;
            }
            else{
                if(!st.count(my_pow(p[i],j))){
                    ans--;
                    st.insert(my_pow(p[i],j));
                    //cout << my_pow(p[i],j) << endl;
                }
            }
            j++;
        }
    }

    cout << ans << endl;


    return 0;
}