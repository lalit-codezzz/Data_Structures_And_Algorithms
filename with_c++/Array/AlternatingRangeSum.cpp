#include<iostream>
using namespace std;

int main () {
    int n = 0, q = 0;
    cin >> n >> q;
    int arr[n];
    int pSum[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int altSum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            altSum += arr[i];
        } else {
            altSum -= arr[i];
        }
        pSum[i] = altSum;
    }

    while (q--) {
        int l = 0, r = 0;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0) {
            pSum[r] < 0 ? cout << -(pSum[r]) : cout << pSum[r];
        } else {
            pSum[r] < 0 ? cout << -(pSum[r] - pSum[l - 1]) : cout << pSum[r] - pSum[l - 1]; 
        }
        cout << "\n";
    }
    return 0;
}