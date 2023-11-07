#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)b; i--)
#define pb push_back
#define em emplace_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;

int main(){

    ll n,q;
    cin >> n;
    string s;
    cin >> s;
    cin >> q;
    string h,w;
    h = s.substr(0,n);
    w = s.substr(n);
    rep(i,q){
        ll a,b,c;
        cin >> a >> b >> c;
        b--; c--;
        if(a == 1){
            //swap(s[b],s[c]);
            if(b < n && c < n){
                swap(h[b],h[c]);
            }
            else if(b >= n && c >= n){
                swap(w[b % n],w[c % n]);
            }
            else{
                swap(h[b % n],w[c % n]);
            }
        }
        else{
            //cout << w << h << endl;
            /*string k = h;
            h = w;
            w = k;*/
            swap(h,w);
        }
        //cout << h << w << endl;
    }

    cout << h << w << endl;

    return 0;
}