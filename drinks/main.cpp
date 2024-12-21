#include <bits/stdc++.h>
using namespace std;

double solve(int n, vector<int> p) {
	double sum = 0.0;
	for (int i: p) 
		sum += i;
	return sum/n;
}


int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; ++i) 
		cin >> p[i];

	cout << fixed << setprecision(12) << solve(n, p) << endl;
	return 0;
}
