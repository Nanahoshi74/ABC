#include <bits/stdc++.h>
//#include <atcoder/all>
//using namespace atcoder;
//using mint = modint998244353;
//using mint = modint1000000007;
// using mint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl;}
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}
char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}

ll h,w;

bool valid(int x, int y) {
    if(0 <= x && x < h && 0 <= y && y < w) {return true;}
    else {return false;}
}

int main(){

    cin >> h >> w;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }
    rep(i,h){
        rep(j,w){
            vector<pair<ll,ll>> pa;
            if(s[i][j] == 's'){
                pa.emplace_back(i,j);
                ll p = 1;
                if(valid(i,j+1)){
                    if(s[i][j+1] == 'n'){
                        p++;
                        pa.emplace_back(i,j+1);
                    }
                }
                if(valid(i,j+2)){
                    if(s[i][j+2] == 'u'){
                        p++;
                        pa.emplace_back(i,j+2);
                    }
                }
                if(valid(i,j+3)){
                    if(s[i][j+3] == 'k'){
                        p++;
                        pa.emplace_back(i,j+3);
                    }
                }
                if(valid(i,j+4)){
                    if(s[i][j+4] == 'e'){
                        p++;
                        pa.emplace_back(i,j+4);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                ////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i,j-1)){
                    if(s[i][j-1] == 'n'){
                        p++;
                        pa.emplace_back(i,j-1);
                    }
                }
                if(valid(i,j-2)){
                    if(s[i][j-2] == 'u'){
                        p++;
                        pa.emplace_back(i,j-2);
                    }
                }
                if(valid(i,j-3)){
                    if(s[i][j-3] == 'k'){
                        p++;
                        pa.emplace_back(i,j-3);
                    }
                }
                if(valid(i,j-4)){
                    if(s[i][j-4] == 'e'){
                        p++;
                        pa.emplace_back(i,j-4);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                ///////////////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i-1,j)){
                    if(s[i-1][j] == 'n'){
                        p++;
                        pa.emplace_back(i-1,j);
                    }
                }
                if(valid(i-2,j)){
                    if(s[i-2][j] == 'u'){
                        p++;
                        pa.emplace_back(i-2,j);
                    }
                }
                if(valid(i-3,j)){
                    if(s[i-3][j] == 'k'){
                        p++;
                        pa.emplace_back(i-3,j);
                    }
                }
                if(valid(i-4,j)){
                    if(s[i-4][j] == 'e'){
                        p++;
                        pa.emplace_back(i-4,j);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                //////////////////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i+1,j)){
                    if(s[i+1][j] == 'n'){
                        p++;
                        pa.emplace_back(i+1,j);
                    }
                }
                if(valid(i+2,j)){
                    if(s[i+2][j] == 'u'){
                        p++;
                        pa.emplace_back(i+2,j);
                    }
                }
                if(valid(i+3,j)){
                    if(s[i+3][j] == 'k'){
                        p++;
                        pa.emplace_back(i+3,j);
                    }
                }
                if(valid(i+4,j)){
                    if(s[i+4][j] == 'e'){
                        p++;
                        pa.emplace_back(i+4,j);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                //////////////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i-1,j-1)){
                    if(s[i-1][j-1] == 'n'){
                        p++;
                        pa.emplace_back(i-1,j-1);
                    }
                }
                if(valid(i-2,j-2)){
                    if(s[i-2][j-2] == 'u'){
                        p++;
                        pa.emplace_back(i-2,j-2);
                    }
                }
                if(valid(i-3,j-3)){
                    if(s[i-3][j-3] == 'k'){
                        p++;
                        pa.emplace_back(i-3,j-3);
                    }
                }
                if(valid(i-4,j-4)){
                    if(s[i-4][j-4] == 'e'){
                        p++;
                        pa.emplace_back(i-4,j-4);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                ///////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i-1,j+1)){
                    if(s[i-1][j+1] == 'n'){
                        p++;
                        pa.emplace_back(i-1,j+1);
                    }
                }
                if(valid(i-2,j+2)){
                    if(s[i-2][j+2] == 'u'){
                        p++;
                        pa.emplace_back(i-2,j+2);
                    }
                }
                if(valid(i-3,j+3)){
                    if(s[i-3][j+3] == 'k'){
                        p++;
                        pa.emplace_back(i-3,j+3);
                    }
                }
                if(valid(i-4,j+4)){
                    if(s[i-4][j+4] == 'e'){
                        p++;
                        pa.emplace_back(i-4,j+4);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                //////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i+1,j+1)){
                    if(s[i+1][j+1] == 'n'){
                        p++;
                        pa.emplace_back(i+1,j+1);
                    }
                }
                if(valid(i+2,j+2)){
                    if(s[i+2][j+2] == 'u'){
                        p++;
                        pa.emplace_back(i+2,j+2);
                    }
                }
                if(valid(i+3,j+3)){
                    if(s[i+3][j+3] == 'k'){
                        p++;
                        pa.emplace_back(i+3,j+3);
                    }
                }
                if(valid(i+4,j+4)){
                    if(s[i+4][j+4] == 'e'){
                        p++;
                        pa.emplace_back(i+4,j+4);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
                /////////////////////////////////////
                p = 1;
                pa.clear();
                pa.emplace_back(i,j);
                if(valid(i+1,j-1)){
                    if(s[i+1][j-1] == 'n'){
                        p++;
                        pa.emplace_back(i+1,j-1);
                    }
                }
                if(valid(i+2,j-2)){
                    if(s[i+2][j-2] == 'u'){
                        p++;
                        pa.emplace_back(i+2,j-2);
                    }
                }
                if(valid(i+3,j-3)){
                    if(s[i+3][j-3] == 'k'){
                        p++;
                        pa.emplace_back(i+3,j-3);
                    }
                }
                if(valid(i+4,j-4)){
                    if(s[i+4][j-4] == 'e'){
                        p++;
                        pa.emplace_back(i+4,j-4);
                    }
                }
                if(p == 5){
                    for(auto g : pa){
                        cout << g.first + 1 << " " << g.second + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}