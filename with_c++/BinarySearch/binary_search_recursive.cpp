#include<iostream>
#include<climits>
using namespace std;

int binary_search_recursive (int A[], int l, int h, int target) {

    //base case
    if (l > h) return -1;

    int mid = (l + h) / 2 ;

    if (A[mid] == target) {
        return mid;
    } else if (target < A[mid]) {
        return binary_search_recursive(A, l, mid - 1, target);
    } else {
        return binary_search_recursive(A, mid + 1, h, target);
    }

}

int main() {
    

    int n = 10;

    int arr[] = {45, 90, 300, 345, 678, 900, 1098, 4786, 8900, 10000};

    cout << binary_search_recursive(arr, 0, n - 1, 900);

    return 0;
}
