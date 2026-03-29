#include<iostream>
using namespace std;

int main() {
    
    int n = 4;
    int arr[] = {1, 7, -5, 6};

    // TC: O(n^3)
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}