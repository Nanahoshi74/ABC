#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;

    ll ans = n;
    //ll p = 7;

    unordered_set<ll> st;
    repi(i,1,n){
        string s = to_string(i);
        rep(j,s.size()){
            if(s[j] == '7'){
                ans--;
                st.insert(stoll(s));
                break;
            }
        }
    }
    repi(i,1,n){
        stringstream s;
        s << oct << i;
        ll p = stoll(s.str());//8進数
        rep(j,s.str().size()){
            if(s.str()[j] == '7' && !st.count(i)){
                //cout << p << endl;
                ans--;
                st.insert(i);
                break;
            }
        }
    }
    
    cout << ans << endl;


    return 0;
}