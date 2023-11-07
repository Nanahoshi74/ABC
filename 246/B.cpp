#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

double a,b;

bool ok(int x,int y){
    if(a*x == b*y){
        return true;
    }
    else
    return false;
    
}

int main(){

    cin >> a >> b;
    double x,y;

    bool ans;

    double a2 = a;
    double b2 = b;
    double a_2 = a/2;
    double b_2 = b/2;

      x = a2;
      y = b2;

      double a_3 = (a_2+a)/2;
      double b_3 = (b_2+b)/2;
      double a_4 = (a_2)/2;
      double b_4 = (b_2)/2;
       


  for(int i=0;i<1000000;i++){
        if(sqrt(x*x+y*y) >= 0.999999998 && sqrt(x*x+y*y) <= 1.000000001 && x<=1 && y<=1){
            break;
        }
        x = a2;
        y = b2;
        if(sqrt(x*x + y*y) > 1){
            a2 = (a2 + a_4)/2;
            b2 = (b2 + b_4)/2;
        }
        else{
            a2 = (a2 + a_3)/2;
            b2 = (b2 + b_3)/2;
        }
        x = a2;
        y = b2;
 }
 

    printf("%.10f %.10f",x,y);



    return 0;
}