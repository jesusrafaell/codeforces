#include <bits/stdc++.h>
using namespace std;
int n, k, l ,c, d, p, nl , np;

void solve() {
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int count = min({k * l / nl, c * d, p/np}) / n;
	cout << count << endl;
}

int main() {
	solve();
	return 0;
}
