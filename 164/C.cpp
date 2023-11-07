#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    unordered_set<string> st;
    rep(i,n){
        string s;
        cin >> s;
        st.insert(s);
    }

    cout << st.size() << endl;

    return 0;
}