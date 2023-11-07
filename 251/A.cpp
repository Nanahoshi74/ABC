#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    string ans;
    while(true){
        if(ans.size() == 6) break;
        ans += s;
    }

    cout << ans << endl;
    
    return 0;
}