#include<iostream>
#include<vector>
using namespace std;

void factor_count_queries (int x) {

    int factors[x + 1] = {0};
    for (int i = 1; i <= x; ++i) {

        

        for (int j = i; j <= x; j +=i) {
            factors[j]++;
        }       

    }

    cout << factors[x] << "\n";

}


const int N = 1e6 + 1;
int factors[N];

int main() {

    /*
    You are given Q queries. Each query contains an integer x.

    For each query, print the number of positive divisors of x.

    Input:
        The first line contains a single integer Q (1 ≤ Q ≤ 10^6).
        Each of the next Q lines contains an integer x (1 ≤ x ≤ 10^6).

    Output:
        For each query, print a single integer — 
        the number of positive divisors of x.
*/
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= N; ++i) {

        

        for (int j = i; j <= N; j +=i) {
            factors[j]++;
        }       

    }

    int q = 0;
    cin >> q;

    while (q--) {
        int x = 0;
        cin >> x;

        // TC: O(q * (nlog(n)))
        // SC: O(q * (nlog(n)))
        // Error: TLE (because everytime this funciton will compute the factors from 1 to x leading a TLE)
        // Solution: pre-compute the factors according to constraint(1 ≤ x ≤ 10^6)
        // factor_count_queries(x);

        
        cout << factors[x] << " \n";

    }

    

    return 0;
}
