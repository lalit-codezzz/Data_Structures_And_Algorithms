#include<iostream>
#include<climits>
using namespace std;

int binary_search_iterative (int A[], int n, int target) {

    int l = 0, h = n - 1;

    while (l <= h) {
        int mid = (l + h) / 2;

        if (A[mid] == target) {
            return mid;
        } else if (target < A[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;

}

int main() {
    

    int n = 10;

    int arr[] = {45, 90, 300, 345, 678, 900, 1098, 4786, 8900, 10000};

    cout << binary_search_iterative(arr, n, 8900);

    return 0;
}
