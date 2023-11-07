#include <bits/stdc++.h>

using namespace std;
 
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define repr(i, a, b) for (long long int i = a; i < b; i++)
#define repi(i, a, b) for(long long int i = a; i<=b; i++)
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){

    ll N;
    cin >> N;


    ll L[N];
    
    vector<string> a(N);

    rep(i,N){
       
       cin >> L[i] >> a[i];

    }
    ll ans = 0;
    map<string,ll> equal;

    rep(i,N)
     equal[a[i]] = 0;

    rep(i,N){

        ll x = 1;
        ll p = i;

        repr(j,i+1,N){
           if(a[i] == a[j])
            x++;

        }

        equal[a[i]] = x;

        ans += equal[a[i]]/x;



    }


    cout << ans << endl;

    return 0;
}