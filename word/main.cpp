#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
	int countUpper = 0;

	for (char c : s) 
		if (isupper(c)) 
			++countUpper;

	if (countUpper > s.length()/2) 
		for (char& c: s)
			c = toupper(c);
	else 
		for (char& c: s)
			c = tolower(c);
	return s;
}

int main () {
	string s;
	cin >> s;
	cout << solve(s) << endl;

	return 0;
}
