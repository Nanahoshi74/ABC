#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

double npow(long double d, long long n)
{
  ll i;
  long double ret = 1.0;
 
  for (i = 0; i < n; i++) {
    ret *= d;
  }
 
  return ret;
}

int main(){

    ll n;
    cin >> n;

    string n2 = to_string(n);
    ll keta = n2.size();

    ll ans = 0;

    if(keta == 1){
        cout << 0 << endl;
    }
    else if(n == 10) cout << 0 << endl;
    else{
        ll k = 0;
        bool ok = false;
        for(int i=2;i<=keta;i+=2){
            ll h,w;
            h = npow(10,i-2-k),w = npow(10,i-1-k)-1;
            //cout << i << " " <<  w << endl;
            for(ll j = h;j<=w;j++){
                string p = to_string(j);
                p += p;
                //cout << p << endl;
                ll q = stoll(p);
                //cout << q << endl;
            
                if(q > n){
                    ok = true;
                    break;
                }
                ans++;
                //cout << p << " " << ans  << " " << j << endl;
                if(q >= n){
                    ok = true;
                    break;
                }
            }
            k++;
            if(ok) break;
        }
        //cout << ans << endl;
    }

    cout << ans << endl;


    return 0;
}