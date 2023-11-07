#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

  int n, x, y;
	string a;
	cin >> a;
	n = a.size();
	x = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 'a')x++;
		else break;
	}
	y = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == 'a')y++;
		else break;
	}
	if (x == n) {
		cout << "Yes" << endl;
		return 0;
	}
	if (x > y) {
		cout << "No" << endl;
		return 0;
	}
	string a2 = a;
	reverse(a2.begin(),a2.end());
	rep(i,y-x){
		a2.push_back('a');
	}
	string a3 = a2;
	reverse(a3.begin(),a3.end());
	if(a3 == a2)
	cout << "Yes" << endl;
	else
	cout << "No" << endl;




    return 0;
}