#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i=a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    string ans;
    while(n != 0){
        if(n%2 == 1){
            ans += 'A';
            n--;
        }
        else{
            ans += 'B';
            n /= 2;
        }
    }
    reverse(ans.begin(),ans.end());

    cout << ans << endl;



    return 0;
}