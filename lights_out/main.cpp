#include <bits/stdc++.h>
using namespace std;

int toggle(int i) {
	if (i == 0) return 1;
	return 0;
}

void solve(vector<vector<int>> matrix, vector<vector<int>> ans) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (matrix[i][j]%2 == 1) {
				ans[i][j] = toggle(ans[i][j]);				
				if (i < 2) ans[i+1][j] = toggle(ans[i+1][j]);
				if (i > 0) ans[i-1][j] = toggle(ans[i-1][j]);
				if (j < 2) ans[i][j+1] = toggle(ans[i][j+1]);
				if (j > 0) ans[i][j-1] = toggle(ans[i][j-1]);
			}
		}
	}

	for (const auto& row : ans) {
		for (const auto& elem : row) 
			cout << elem << "";
		cout << endl;
	}
}

int main() {
	// 3x3
	vector<vector<int>> m(3, vector<int>(3));
	vector<vector<int>> ans(3, vector<int>(3));

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j){
			cin >> m[i][j];
			ans[i][j] = 1;
		}
	}

	solve(m,ans);
	return 0;
}
