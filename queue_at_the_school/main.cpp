#include <bits/stdc++.h>
using namespace std;

// boy = B | girl = G

string solve(int n, int t, string s) {
	int ib = -1;
	while (t > 0) {
		for (int i = 0; i < n-1; ++i) {\
			if (s[i] == 'B' && s[i+1] == 'G'){
				s[i] = 'G';
				s[i+1] = 'B';
				++i;
			}
		}
		--t;
	}
	return s;
}


int main() {
	int n, t;
	string s;
	cin >> n >> t >> s;
	cout << solve(n, t, s) << endl;
	return 0;
}
