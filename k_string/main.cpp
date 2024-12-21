#include <bits/stdc++.h>
#define ll long long
using namespace std;
int k;

void solve() {
	cin >> k;
	string s;
	cin >> s;
	map<char, int> counter;

	for (char c : s) {
		++counter[c];
	}

	string word = "";
	for (auto& pair : counter) {
		if (pair.second % k != 0) {
			cout << -1 << endl;
			return;
		}
		word += string(pair.second / k, pair.first);
	}

	string ans = "";
	for (int i = 0; i < k; ++i) {
		ans += word;
	}

	cout << ans << endl;
}

int main() {
	solve();
	return 0;
} 
