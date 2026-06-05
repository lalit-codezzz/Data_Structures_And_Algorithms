#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void input_and_print_vector() {
    int n = 0;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        v.push_back(val);
    }
    
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    
    cout << "\n";
    
}

void input_and_print_vector_reversed() {
    int n = 0;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        v.push_back(val);
    }
    
    // 1. using reverse() function from the algorithm header file
    // TC - O(n)
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    
    cout << "\n";
    
    
    // 2. using ranges.reverse() function from the algorithm header file
    // came in c++20
    ranges::reverse(v);
    
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    
    cout << "\n";
    
    
}

void sum_of_elements_of_vector() {
    int n = 0;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        v.push_back(val);
    }
    
    int sum = 0;
    
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    
    cout << "Sum of vector elements: " << sum << "\n";
    
}

void find_max_in_vector() {
    int n = 0;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        v.push_back(val);
    }
    
    int max = INT_MIN;
    for (int i = 0; i < v.size(); ++i) {
        if (max < v[i]) {
            max = v[i];
        }
    }
    
    cout << "Maximum element: " << max << "\n";
    
}

void find_min_in_vector() {
    int n = 0;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        v.push_back(val);
    }
    
    int min = INT_MAX;
    for (int i = 0; i < v.size(); ++i) {
        if (min > v[i]) {
            min = v[i];
        }
    }
    
    cout << "Minimum element: " << min << "\n";
    
}

void copy_vector1_to_vector2() {
    int n = 0; 
    vector<int> v1;
    vector<int> v2;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        v1.push_back(val);
    }
    
    v2 = v1;
    
    cout << "2nd vector output:" << "\n";
    for (int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }
    
    cout << "\n";
    
}
int main() {
    
    // 1. Input and Print
    // input_and_print_vector();
    
    // 2. Reverse Printing
    // input_and_print_vector_reversed();
    
    // 3. Sum of Elements
    // sum_of_elements_of_vector();
    
    // 4. Maximum Element
    // find_max_in_vector();
    
    // 5. Minimum Element
    // find_min_in_vector();
    
    // 6. Copy Vector
    copy_vector1_to_vector2();
}
