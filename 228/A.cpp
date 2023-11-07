#include <bits/stdc++.h>

using namespace std;
 
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define repr(i, a, b) for (long long int i = a; i < b; i++)
#define repi(i, a, b) for(long long int i = a; i<=b; i++)
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){

    ll S,T,X;
    cin >> S >> T >> X;

    bool ans = false;

    if(T > X && X > S)
    ans = true;
    else if(S > T && X < T)
    ans = true;
    else if(S > T && X > S && T < X)
    ans = true;
    else if(S == X && X!=T)
    ans = true;
    
    if(ans == true)
     cout << "Yes" << endl;
     else
     cout << "No" << endl;

    return 0;

}