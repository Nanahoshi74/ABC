#include <bits/stdc++.h>

using namespace std;
 
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define repr(i, a, b) for (long long int i = a; i < b; i++)
#define repi(i, a, b) for(long long int i = a; i<=b; i++)
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){

    vector<string> S(2);

    rep(i,2){
    cin >> S[i];
    }

    bool ans = true;

    if(S[0][0] == '#'){
     if(S[0][1] != '#' && S[1][0] != '#'){
     ans = false;
     }
    }
     if(S[1][1] == '#'){
      if(S[0][0] != '#' && S[1][1] != '#'){
      ans = false;
      }
     }
     if(S[1][0] == '#'){
      if(S[1][1] != '#' && S[0][0] != '#'){
      ans = false;
      }
     }
      if(S[1][1] == '#'){
       if(S[1][0] != '#' && S[0][1] != '#'){
       ans = false;
       }
      }



     
     if(ans)
     cout << "Yes" << endl;
     else
     cout << "No" << endl;




return 0;

}