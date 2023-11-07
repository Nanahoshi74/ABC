#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

ll f(ll n){
  return (1+n)*n/2;
}


ll f2(ll n,ll a){
  return f(n/a)*a;
}



int main(){

  ll n,a,b;
  cin >> n >> a >> b;

  ll ans = f(n);
  ans -= f2(n,a);
  ans -= f2(n,b);
  ans += f2(n,lcm(a,b));

  cout << ans << endl;



  return 0;
}