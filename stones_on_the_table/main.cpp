#include <bits/stdc++.h>
using namespace std;
int n;

// red = R | B = blue | G = Green
void solve() {
	cin >> n;
	string stones;
	cin >> stones;
	int count = 0;
	for (int i = 1; i < n; ++i) 
		if (stones[i] == stones[i-1]) 
			count ++;

	cout << count << endl;
}


int main() {
	solve();
	return 0;
}
