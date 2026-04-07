#include<iostream>
#include<climits>
using namespace std;

void bruteForce (int arr[], int n) {

    int cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) cnt0++;
        else cnt1++;
    }

    for (int i = 0; i < n; ++i) {
        if (cnt0 > 0) {
            cout << 0 << " ";
            cnt0--;
        }
        else {
            cout << 1 << " ";
            cnt1--;
        }
    }
}

int main() {
    

    int n = 10;

    int arr[] = {1, 0, 1, 0, 0, 0, 0, 1, 1, 0};

    bruteForce(arr, n);    

    return 0;
}