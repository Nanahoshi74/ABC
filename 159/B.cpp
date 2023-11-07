#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s,t;
    cin >> s;
    t = s;
    reverse(t.begin(),t.end());
    bool ans = true;
    if(t != s){
        ans = false;
    }
    string p = s.substr(0,s.size()-(s.size()-1)/2-1);
    string q = p;
    reverse(q.begin(),q.end());
    if(p != q){
        ans = false;
    }
    string k = s.substr((s.size()+3)/2-1);
    string l = k;
    reverse(l.begin(),l.end());
    if(l != k){
        ans = false;
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}