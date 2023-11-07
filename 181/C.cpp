#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

struct V{//************************幾何ライブラリ****************************
    int x,y;
    V(int x = 0, int y = 0): x(x),y(y){}
    V operator+(const V& a) const{//ベクトルの足し算を定義
        return V(x+a.x,y+a.y);
    }
    V operator-(const V& a) const{//ベクトルの引き算を定義
        return V(x-a.x,y-a.y);
    }
    V operator*(const int p) const{//ベクトルの定数倍
        return V(x*p,y*p);
    }
    int cross(const V& a) const{//外積を求める
        return x*a.y - y*a.x;
    }
    int ccw(const V& a) const{
        int area = cross(a);
        if(area > 0) return +1;//ccw(反時計回り)
        if(area < 0) return -1; //cw(時計回り)
        return 0; //collinear(1直線上)
    }
};


int main(){

    ll n;
    cin >> n;
    vector<V> p(n); 
    rep(i,n) cin >> p[i].x >> p[i].y;
    rep(i,n){
        repi(j,i+1,n-1){
            repi(k,j+1,n-1){
                V A = p[i];
                V B = p[j];
                V C = p[k];
                V b = B-A,c = C-A;
                if(b.ccw(c) == 0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;



    return 0;
}