#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;

    if(x <= m){
        cout << t << endl;
    }
    else{
        cout << t-(x-m)*d << endl;
    }


    return 0;
}