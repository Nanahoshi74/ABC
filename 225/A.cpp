#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    set<string> a;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int ans = 0;

    do{
        cout << s << endl;
      
    }while(next_permutation(s.begin(),s.end()));

    //cout << ans << endl;
    

    return 0;
}