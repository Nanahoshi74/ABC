#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s,t;
    cin >> s;
    cin >> t;
    int len = s.size();

    bool ans = false;
    
    if(s == t)
    ans = true;
    if(!ans){
    for(int i=1;i<26;i++){
        ans = true;
        rep(j,len){
            int x = s[j];
            x += i;
            if(x > 'z'){
                x += 'a'-'z'-1;
            }
            if(x != t[j]){
                ans = false;
            }
        }
        if(ans){
            cout << "Yes" << endl;
            return 0;
        }
    }
  }

  if(!ans)
  cout << "No" << endl; 
  else
  cout << "Yes" << endl;

  return 0;
}