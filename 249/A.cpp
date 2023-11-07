#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    //int ans = 0;
    int t1 = 0;
    int t2 = 0;
    
    int p = x/(a+c);
    int q = x/(d+f);
    if(p == 0){
        if(a < x){
        t1 = a * b;
        }
        else if(a >= x){
            t1 = x*b;
        }
    }
    if(q == 0){
        if(d < x){
        t2 = d * e;
        }
        else if(d >= x){
            t2 = x*e;
        }
    }
    if(p > 0){
        t1 += a*b*p;
        int h = x % (a + c);
        if(h > a){
            t1 += a*b;
        }
        else
        t1 += h*b;
    }
    if(q > 0){
        t2 += d*e*q;
        int g = x % (d + f);
        if(g > d){
            t2 += d*e;
        }
        else{
        t2 += g*e;
        }
    }

   
    if(t1 > t2){
        cout << "Takahashi" << endl;
    }
    else if(t1 < t2){
        cout << "Aoki" << endl;
    }
    else if(t1 == t2){
        cout << "Draw" << endl;
    }

    //cout << t1  <<" "<< t2 << endl;

    return 0;
}