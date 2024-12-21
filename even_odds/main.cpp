#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;

// odd + even; 1,3,5,7,9,2,4,6,8,10
void solve() {
	cin >> n >> k;
	if (k <= (n + 1) / 2) 
		cout << (k * 2) - 1;
	else 
		cout << (k - ((n + 1) / 2)) * 2;
	cout << endl;
}

int main() {
	solve();
	return 0;
}
