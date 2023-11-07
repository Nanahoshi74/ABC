#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = a; i <= (int)(b); i++)
#define rng(i, a, b) for (int i = a; i < (int)(b); i++)
#define rrng(i, a, b) for (int i = a; i >= (int)(b); i--)
#define pb push_back
#define em emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define ret(x)               \
    {                        \
        cout << (x) << endl; \
    }
typedef long long ll;
using namespace std;
using P = pair<ll, ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;

int main(){

    ll h, m;
    cin >> h >> m;
    // vector<ll> a(4);
    // if (h < 10){
    //     a[0] = 0;
    //     a[2] = h;
    // }
    // else{
    //     a[0] = h / 10;
    //     a[2] = h % 10;
    // }
    // if (m < 10){
    //     a[0] = 0;
    //     a[2] = m;
    // }
    // else{
    //     a[0] = m / 10;
    //     a[2] = m % 10;
    // }
    repi(i,h,23){
        vector<ll> p(4);
        if(i == h){
            repi(j,m,59){
                if (i < 10){
                    p[0] = 0;
                    p[2] = i;
                }
                else{
                    p[0] = i / 10;
                    p[2] = i % 10;
                }
                if (j < 10){
                    p[1] = 0;
                    p[3] = j;
                }
                else{
                    p[1] = j / 10;
                    p[3] = j % 10;
                }
                swap(p[1],p[2]);
        ll u,v;
        if(p[0] == 0){
            u = p[0];
        }
        else{
            u = p[0] * 10 + p[2];
        }
        if(p[1] == 0){
            v = p[1];
        }
        else{
            v = p[1] * 10 + p[3];
        }
        if(u >= 0 && u <= 23 && v >= 0 && v <= 23){
            cout << i << " " << j << endl;
            return 0;
        }
            }
        }
        else{
            repi(j,0,59){
                if (i < 10){
                    p[0] = 0;
                    p[2] = i;
                }
                else{
                    p[0] = i / 10;
                    p[2] = i % 10;
                }
                if (j < 10){
                    p[1] = 0;
                    p[3] = j;
                }
                else{
                    p[1] = j / 10;
                    p[3] = j % 10;
                }
                swap(p[1],p[2]);
        ll u,v;
        if(p[0] == 0){
            u = p[0];
        }
        else{
            u = p[0] * 10 + p[2];
        }
        if(p[1] == 0){
            v = p[1];
        }
        else{
            v = p[1] * 10 + p[3];
        }
        if(u >= 0 && u <= 23 && v >= 0 && v <= 23){
            cout << i << " " << j << endl;
            return 0;
        }
            }
        }
    }
    repi(i,0,h){
        vector<ll> p(4);
        if(i == h){
            repi(j,0,m-1){
                if (i < 10){
                    p[0] = 0;
                    p[2] = i;
                }
                else{
                    p[0] = i / 10;
                    p[2] = i % 10;
                }
                if (j < 10){
                    p[1] = 0;
                    p[3] = j;
                }
                else{
                    p[1] = j / 10;
                    p[3] = j % 10;
                }
                swap(p[1],p[2]);
                ll u,v;
                if(p[0] == 0){
                u = p[0];
                }
        else{
            u = p[0] * 10 + p[2];
        }
        if(p[1] == 0){
            v = p[1];
        }
        else{
            v = p[1] * 10 + p[3];
        }
        if(u >= 0 && u <= 23 && v >= 0 && v <= 23){
            cout << i << " " << j << endl;
            return 0;
        }                
            }
        }
        else{
            repi(j,0,59){
if (i < 10){
                    p[0] = 0;
                    p[2] = i;
                }
                else{
                    p[0] = i / 10;
                    p[2] = i % 10;
                }
                if (j < 10){
                    p[1] = 0;
                    p[3] = j;
                }
                else{
                    p[1] = j / 10;
                    p[3] = j % 10;
                }
                swap(p[1],p[2]);
                ll u,v;
                if(p[0] == 0){
                u = p[0];
                }
        else{
            u = p[0] * 10 + p[2];
        }
        if(p[1] == 0){
            v = p[1];
        }
        else{
            v = p[1] * 10 + p[3];
        }
        if(u >= 0 && u <= 23 && v >= 0 && v <= 23){
            cout << i << " " << j << endl;
            return 0;
        }                
            }
        }
    }

    return 0;
}