#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(1 << n);
    rep(i,1 << n){
        cin >> a[i];
    }
    vector<int> re(1 << n);
    iota(re.begin(),re.end(),0);
    repi(i,1,n){
        vector<int> nere;
        rep(j,1 << (n-i)){
            if(a[re[2*j]] < a[re[2*j+1]]){
                nere.push_back(re[2*j+1]);
            }
            else{
                nere.push_back(re[2*j]);
            }
        }
        if(i == n){
            if(a[re[0]] < a[re[1]]){
                cout << re[0] + 1 << endl;
                return 0;
            }
            else{
                cout << re[1] + 1 << endl;
            }
        }
        re = nere;
    }

    return 0;
}