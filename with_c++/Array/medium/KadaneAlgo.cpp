#include<iostream>
#include<climits>
using namespace std;

void maxSubarraySum (int arr[], int n) {

    int ans = INT_MIN, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];

        if (sum < 0) sum = 0;

        ans = max(ans, sum);

    }

    cout << ans << "\n";

}

int main() {
    
    int n = 11;

    int arr[] = {7, 8, -100, 8, 9, 20, 50, -500, 160, -70, 150};

    maxSubarraySum(arr, n);
    

    return 0;
}