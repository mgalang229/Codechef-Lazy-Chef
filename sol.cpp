#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, m, d;
		cin >> x >> m >> d;
    		// find the minimum between the product of 'x' and 'm' and the sum of 'x' and 'd'
		cout << min(x * m, x + d) << '\n';
	}
	return 0;
}
