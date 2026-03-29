#include<iostream>
using namespace std;

// Using triple for loop
void bruteForceApproach (int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += arr[k];
            }
            cout << sum << "\n";
        }
    }
}

// Using Prefix sum
void betterApproach (int arr[], int n) {

    // calculating prefix sum
    int psum[n];
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        psum[i] = sum;
    }

    // finding subarray sum using prefix sum (psum)
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {

            if (i == 0) {
                cout << psum[j];
            } else {
                cout << psum[j] - psum[i - 1];
            }
            cout  << "\n";
        }
    }
}

// carry forward the sum from previous iteration
void optimalApproach (int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];
            cout << sum << "\n";
        }
    }
}

int main() {
    
    int n = 4;
    int arr[] = {1, 7, -5, 6};

    // TC: O(n^3)
    // SC: O(1)
    // bruteForceApproach(arr, n);

    // TC: O(n^2)
    // SC: O(n)
    // betterApproach(arr, n);


    optimalApproach(arr, n);

    

    return 0;
}