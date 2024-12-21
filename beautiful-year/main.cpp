#include <bits/stdc++.h>
using namespace std;

int solve(int num) {
	while (true) {
		++num;
		int curr = num;
		bool unique = 1;
		int seen[10] = {0};

		while (curr > 0) {
			int d = curr % 10;
			if (seen[d]++) {
				unique = 0;
				break;
			}
			curr /= 10;
		}
		if (unique) return num;
	}

	return 0;
}

int main () {

	int s;
	cin >> s;
	cout << solve(s) << endl;

	return 0;
}
