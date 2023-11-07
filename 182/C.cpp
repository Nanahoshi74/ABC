#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string n;
    cin >> n;
    ll keta = n.size();
    vector<ll> ans;
    /*if(stoll(n) % 3 == 0){
        cout << 0 << endl;
        return 0;
    }*/

    rep(i,1 << keta){
        string p;
        ll k = 0;
        rep(j,keta){
            if(i & (1 << j)){
                p.push_back(n[j]);
                k++;
            }   
        }
        if(i != 0){
            if(stoll(p) % 3 == 0){
                ans.push_back(keta-k);
         }
        }
    }
    if(ans.size() != 0){
         cout << *min_element(ans.begin(),ans.end()) << endl;
    }
    else cout << -1 << endl;

    return 0;
}