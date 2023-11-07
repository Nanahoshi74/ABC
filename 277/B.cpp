#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
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

    ll n;
    cin >> n;
    vector<string> s(n);
    unordered_set<string> st;
    rep(i,n){
        cin >> s[i];
    }
    rep(i,n){
        int cnt = 0;
        if(st.count(s[i])){
            cout << "No" << endl;
            return 0;
        }
        else{
            st.insert(s[i]);
        }
        if(s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S'){

        }
        else{
            cnt++;
        }
        if(s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' || s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6'
        || s[i][1] == '7' || s[i][1] == '8' || s[i][1] == '9' || s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q'
        || s[i][1] == 'K'){

        }
        else{
            cnt++;
        }
        if(cnt >= 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;


    return 0;
}