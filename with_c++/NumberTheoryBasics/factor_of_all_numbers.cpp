#include<iostream>
#include<vector>
using namespace std;

void factors_of_all_numbers_brute_force (int n) {

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= i; ++j) {

            if (i % j == 0) {
                cout << j << " ";
            }

        }

        cout << "\n";

    }

}

void factors_of_all_numbers_better_not_sorted (int n) {
    for (int i = 1; i <= n; ++i) {

        int j = 1;

        while (j*j <= i) {

            if (i % j == 0) {
                cout << j << " ";

                if (j != (i / j)) {
                    cout << (i / j) << " ";
                }
            }

            j++;

        }

        cout << "\n";

    }
}

void factors_of_all_numbers_better_sorted (int n) {
    for (int i = 1; i <= n; ++i) {

        int j = 1;

        while (j*j <= i) {

            if (i % j == 0) {
                cout << j << " ";
            }

            j++;

        }

        j--;

        while (j * j <= i && j >= 1) {

            if (j != (i / j) && i % j == 0) {
                cout << (i / j) << " ";
            }

            j--;

        }

        cout << "\n";

    }
}

void factors_of_all_numbers_optimal (int n) {

    vector<int> factors[n + 1];

    for (int i = 1; i <= n; ++i) {

        for (int j = i; j <= n; j += i) {
            factors[j].push_back(i);
        }

    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < factors[i].size(); ++j) {
            cout << factors[i][j] << " ";
        }
        cout << "\n";
    }

}

int main() {

    /*
    Given an integer N, print the list of all factors 
    for every number from 1 to N.

    For each number i (1 ≤ i ≤ N), output all integers 
    that divide i in increasing order.

    Input:
        A single integer N (1 ≤ N ≤ 10^6)

    Output:
        For each i from 1 to N, print a line containing 
        all factors of i in increasing order.
*/
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);    

    int n = 0;
    cin >> n;

    // TC: O(n^2)
    // SC: O(1)
    // Error: TLE
    // factors_of_all_numbers_brute_force(n);

    // TC: O(n * sqrt(n))
    // SC: O(1)
    // Error: printing format is not sorted
    // factors_of_all_numbers_better_not_sorted(n);


    // TC: O(n * (2 * sqrt(n)))
    // SC: O(1)
    // Error: TLE
    // factors_of_all_numbers_better_sorted(n);


    // TC: O(n * log(n))
    // SC: O(n * log(n))
    factors_of_all_numbers_optimal(n);

    return 0;
}
