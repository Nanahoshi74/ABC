#include <bits/stdc++.h>

using namespace std;
 
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define repr(i, a, b) for (long long int i = a; i < b; i++)
#define repi(i, a, b) for(long long int i = a; i<=b; i++)
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){

    ll N,X;
    cin >> N >>  X;

    vector<ll> A(N);
    vector<bool> B(N);

   repi(i,1,N){

       cin >> A[i];
   }
    int i=X;

    do{
        B[i] = true;
        i = A[i];
    }while(B[i] == false);

    int ans = 0;

    repi(i,1,N){
        if(B[i] == true)
        ans++;
    }

    cout << ans << endl;

    return 0;

}