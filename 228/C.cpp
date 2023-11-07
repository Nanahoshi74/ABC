#include <bits/stdc++.h>

using namespace std;
 
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define repr(i, a, b) for (long long int i = a; i < b; i++)
#define repi(i, a, b) for(long long int i = a; i<=b; i++)
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){

    int n,k;
    cin >> n >> k;
    vector<int> s(n);
    rep(i,n){
        rep(j,3){
            int a;
            cin >> a;
            s[i] += a;
        }
    }
    vector<int> d = s;
    sort(d.rbegin(),d.rend());
    int mx = d[k-1];
    rep(i,n){
        if(s[i] + 300 >= mx) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}