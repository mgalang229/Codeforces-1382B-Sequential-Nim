#include <bits/stdc++.h>
using namespace std;

void test_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k = 0;
	while(k < n && a[k] == 1) {
		k++;
	}
	cout << ((k == n) ^ (k % 2) ? "Second" : "First") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_case();
	}
}
