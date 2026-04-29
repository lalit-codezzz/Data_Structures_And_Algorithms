#include<iostream>
using namespace std;

int binary_to_decimal (string n) {

    int ans = 0, pow2 = 1, i = n.length() - 1;

    while (i >= 0) {

        if (n[i] == '1') {
            ans = ans + pow2;
        }
        
        pow2 = pow2 << 1;
        i--;

    }
    
    return ans;

}


int main() {
    


    ios::sync_with_stdio(false);
    cin.tie(NULL);


    string n = "";
    getline(cin, n);
    
    cout << n <<  "\n";

    cout << binary_to_decimal(n);

    

    return 0;
}
