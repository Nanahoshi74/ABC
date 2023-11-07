#include <bits/stdc++.h>
//#include <atcoder/all>
//using namespace atcoder;
//using mint = modint998244353;
//using mint = modint1000000007;
// using mint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define eb emplace_back
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
char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}

bool check(char s){
    if(s != 'a' && s != 't' && s != 'c' && s != 'o' && s != 'd' && s != 'e' && s != 'r' && s != '@'){
        return true;
    }
    else{
        return false;
    }
}

bool check2(char s){
    if(s != 'a' && s != 't' && s != 'c' && s != 'o' && s != 'd' && s != 'e' && s != 'r'){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string s,t;
    cin >> s;
    cin >> t;

    map<char,ll> p,q;

    rep(i,si(s)){
        p[s[i]]++;
    }
    rep(i,si(t)){
        q[t[i]]++;
    }
    set<char> ss,tt;
    rep(i,si(s)){
        if(check(s[i])){
            ss.insert(s[i]);
        }
        if(check(t[i])){
            tt.insert(t[i]);
        }
    }
    if(si(ss) != si(tt)){
        cout << "No" << endl;
        return 0;
    }
    string z = "atcoder";
    for(auto zz : z){
        if(p[zz] > q[zz]){
            if(q['@'] <= 0){
                cout << "No" << endl;
                return 0;
            }
            ll g = min(q['@'],(p[zz]-q[zz]));
            //cout << zz << " " << g << endl;
            q['@'] -= g;
            q[zz] += g;
        }
        else if(p[zz] < q[zz]){
            if(p['@'] <=  0){
                cout << "No" << endl;
                return 0;
            }
            ll g = min(p['@'],(q[zz]-p[zz]));
            //cout << zz << " " << g << endl;
            p['@'] -= g;
            p[zz] += g;
        }
        else{
            continue;
        }
    }
    rep(i,si(s)){
        if(p[s[i]] != q[s[i]]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    



    return 0;
}