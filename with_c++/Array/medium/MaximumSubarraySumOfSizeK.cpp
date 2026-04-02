#include<iostream>
#include<climits>
using namespace std;

void bruteForceApproach (int arr[], int n, int k) {

    long long maxSum = LLONG_MIN;

    for (int i = 0; i <= n - k; ++i) {
        long long sum = 0;
        for (int j = i; j < i + k; ++j) {
            sum += arr[j];
        }
        maxSum = max(sum, maxSum);

    }

    cout << maxSum << "\n";

}

void optimalApproach (int arr[], int n, int k) {

    long long windowSum = 0, ans = LLONG_MIN;

    // constructing first window sum

    for (int i = 0; i < k; ++i) {
        windowSum += arr[i];
    }

    ans = max(ans, windowSum);

    // traverse next windows
    for (int i = k; i < n; ++i) {
        windowSum += arr[i];
        windowSum -= arr[i - k];

        ans = max(ans, windowSum);

    }

    cout << ans << '\n';

}

int main() {
    
    int n = 0, k = 0;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // TC: O(n^2)
    // SC: O(1)
    // bruteForceApproach(arr, n, k);

    optimalApproach(arr, n, k);

    

    return 0;
}