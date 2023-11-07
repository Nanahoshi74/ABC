#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    ll n;
    cin >> n;
    sort(s.begin(),s.end());
    ll i = 1;
    do{
        if(i == n){
            cout << s << endl;
            return 0;
        }
        i++;
    }while(next_permutation(s.begin(),s.end()));

    return 0;
}