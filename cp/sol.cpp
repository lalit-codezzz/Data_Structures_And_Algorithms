#include <iostream>
using namespace std;

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
		int l = 0, r = 0, sum = 0;
		cin >> l >> r;
		for (int i = l-1; i < r; ++i) {
			sum += arr[i];
		}
		cout << sum << "\n";
	}
}