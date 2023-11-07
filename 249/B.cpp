#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    bool ans = true;
    int len = s.size();
    set<char>st;
    bool ok1 = false;
    bool ok2 = false;
    rep(i,len){
        if(st.count(s[i])){
            ans = false;
            break;
        }
        st.insert(s[i]); 
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ok1 = true;
        }
        if(s[i]  >= 'a' && s[i] <= 'z'){
            ok2 = true;
        }
    }

    if(ok1 == true && ok2 == true && ans == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}