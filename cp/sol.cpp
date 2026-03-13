#include <iostream>
using namespace std;

void solve (int l, int r, int arr[]) {
	int sum = 0;
	for (int i = l-1; i < r; ++i) {
		sum += arr[i];
	}
	cout << sum << "\n";
}

int main () {
	int n = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int q = 0;
	cin >> q;
	while (q--) {
		int l = 0, r = 0;
		cin >> l >> r;
		solve(l, r, arr);
	}
}