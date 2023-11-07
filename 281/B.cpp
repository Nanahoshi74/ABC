#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define em emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl;}
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}

int main(){

    string s;
    cin >> s;
    if(si(s) < 8){
        cout << "No" << endl;
        return 0;
    }
    if(s[0] >= 'A' && s[0] <= 'Z'){
    }
    else{
        cout << "No" << endl;
        return 0; 
    }
    if (s[7] >= 'A' && s[7] <= 'Z'){

    }
    else{
        cout << "No" << endl;
        return 0;
    }
    rng(i,1,7){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << "No" << endl;
            return 0;
        }
    }
    string p = s.substr(1,6);
    ll x = stoll(p);
    if(x >= 100000 && x <= 999999){
        
    }
    else{
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;



    return 0;
}