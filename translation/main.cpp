#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	cin >> s  >> t;

	int n = s.length();
	if (t.length() != n) {
			cout << "NO\n";
			return 0;
	}

	for (int i = 0, j = n-1; i < n && j >= 0; ++i, --j) {
		if (s[i] != t[j]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
