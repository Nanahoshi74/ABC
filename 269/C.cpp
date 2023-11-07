#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;

string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

ll strbin2i (const std::string &s) {

    ll out = 0;

    for (int i = 0, size = s.size() ; i < size ; ++i ) {

        out *= 2;

        out += ((int)s[i] == 49) ? 1 : 0;

    }

    return out;

}

int main(){

    ll n;
    cin >> n;

    string s = toBinary(n);

    ll p = 0;
    set<ll> st;

    vector<ll> o;

    rep(i,si(s)){
        if(s[i] == '1'){
            p++;
            st.insert(i);
            o.push_back(i);
        }
    }
    vector<ll> ans;

    rep(i,1 << p){
        string t;
        set<ll> y;
        /*rep(k,si(s)){
            t.push_back('0');
        }*/
        rep(j,p){
            if(i & (1 << j)){
                if(st.count(o[j])){
                    y.insert(o[j]);
                }
            }
        }
        rep(u,si(s)){
            if(y.count(u)){
                t += '1';
            }
            else t += '0';
        }
        reverse(all(t));
        if(strbin2i(t) <= n) ans.push_back(strbin2i(t));
        //cout << t << endl;
    }
    sort(all(ans));
    rep(i,si(ans)){
        cout << ans[i] << endl;
    }

    



    return 0;
}