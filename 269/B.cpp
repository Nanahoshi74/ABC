#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;

int main(){

    vector<string> s(10);
    rep(i,10){
        cin >> s[i];
    }
    ll a,b,c,d;
    bool ok = false;
    rep(i,10){
        rep(j,10){
            if(s[i][j] == '#'){
                ll li = i;
                ll lj = j;
                a = li + 1;
                c = lj+1;
                if(li == 9){
                        a = li+1;
                        b = 10;
                    }
                rng(k,li+1,10){
                    if(s[k][lj] != '#'){
                        a = li+1;
                        b = k;
                        break;
                    }
                    if(k == 9){
                        a = li+1;
                        b = 10;
                    }
                }
                if(lj == 9){
                        //c = lj+1;
                        d = 10;
                    }
                rng(k,lj+1,10){
                        if(s[li][k] != '#'){
                           // c = lj+1;
                            d = k;
                            break;
                        }
                        if(k == 9){
                        //c = lj+1;
                        d = 10;
                    }
                }
                cout << a << " " << b << endl;
                cout << c << " " << d << endl;
                return 0;
            }
        }
    }



    return 0;
}