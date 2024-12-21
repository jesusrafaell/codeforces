#include <bits/stdc++.h>
using namespace std;
int n;

void solve() {
	cin >> n;
	string line;
	int ans;
	for (int i = 0; i < n; ++i)  {
		cin >> line;
		if (line[1] == '+') 
			++ans;
		else
			--ans;
	}
	cout << ans << endl;
}


int main() {
	solve();
	return 0;
}
