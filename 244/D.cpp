#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    char s1,s2,s3,t1,t2,t3;
    cin >> s1 >> s2 >> s3;
    cin >> t1 >> t2 >> t3;

    string s = "";
    s.push_back(s1);
    s.push_back(s2);
    s.push_back(s3);
    string t;
    t.push_back(t1);
    t.push_back(t2);
    t.push_back(t3);


    int i=0;

    bool ans = false;

    sort(s.begin(),s.end());

    do{
        if(i % 2 == 0 && s == t)
        ans = true;
        i++;
    }while(next_permutation(s.begin(),s.end()));


    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    



    return 0;
}