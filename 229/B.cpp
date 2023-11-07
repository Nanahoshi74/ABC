#include <bits/stdc++.h>

using namespace std;
 
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define repr(i, a, b) for (long long int i = a; i < b; i++)
#define repi(i, a, b) for(long long int i = a; i<=b; i++)
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }


    int ctoi(const char c){
    switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}
 int main(){

    string A,B;
    cin >> A >> B;

    ll asize = A.size();
    ll bsize = B.size();
    ll size;

    if(asize > bsize)
     size = asize;
     else
      size = bsize;
    bool ans = false;

    rep(i,size){


        if(asize-i-1 >= 0 && bsize-i-1 >= 0){
        if(ctoi(A[asize-i-1]) + ctoi(B[bsize-i-1]) >= 10){
         ans = true;
         }
        }
       
   
    }
    if(ans)
     cout << "Hard" << endl;
     else
     cout << "Easy" << endl;







return 0;

}