#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int cnt = 0;
	for (char x : s) {
		if (isalpha(x)) {
			if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
				cnt++;
			}
		} else {
			int tmp = (char) x;
			if (tmp % 2 == 1) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
