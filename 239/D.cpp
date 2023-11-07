#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }

string f(ll n){
    string p;
    if(n == 0){
        p = "Aoki";
    }
    else p = "Takahashi";
    return p;
}

unordered_set<ll> Eratosthenes( const ll N )//********************素数列挙******************
{
    vector<bool> is_prime( N + 1 );
    for( int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    unordered_set<ll> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.insert( i );
        }
    }
    return P;
}

int main(){

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    unordered_set<ll> st = Eratosthenes(200);
    repi(i,a,b){
        bool ok = true;
        rng(j,i+c,i+d+1){
            if(st.count(j)){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << f(1) << endl;
            return 0;
        }
    }

    cout << f(0) << endl;




    return 0;
}