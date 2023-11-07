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
    a
    cin >> s;
    // map<char,bool> a;
    unordered_set<char> st;
    // stack<char> sk;
    // stack<ll> p;
    // map<ll,ll> mp;
    // rep(i,si(s)){
    //     if(s[i] == '('){
    //         sk.push('(');
    //         p.push(i);
    //     }
    //     else if(s[i] == ')'){
    //         sk.pop();
    //         ll u = p.top();
    //         p.pop();
    //         mp[i] = u;
    //     }
    // }
    rep(i,si(s)){
        if(s[i] == '('){
            continue;
        }
        else if(s[i] == ')'){
            // ll lj = mp[i];
            // rep(j,lj){
            //     char c;
            //     if(si(dq) != 0){
            //         c = dq[si(dq)-1];
            //     }
            //     st.erase(c);
            //     if(si(dq) != 0) dq.pop_back();
            // }
            st.clear();
        }
        else{
            if(st.count(s[i])){
                cout << "No" << endl;
                return 0;
            }
            st.insert(s[i]);
        }
    }
    cout << "Yes" << endl; 

    return 0;
}