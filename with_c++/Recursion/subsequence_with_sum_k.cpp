#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void subsequence(int n, int k, int i, int sum, vector<int>& vec, vector<int>& tracker, vector<vector<int>>& final) {
    
    if (i == n) {
        
        long sum = accumulate(tracker.begin(), tracker.end(), 0);
        
        if (sum == k) {
            vector<int> newVec(tracker);
            final.push_back(newVec);
        }
        return;
    }

    tracker.push_back(vec[i]);
    subsequence(n, k, i+1, sum+vec[i], vec, tracker, final);
    tracker.pop_back();


    subsequence(n, k, i+1, sum, vec, tracker, final);
}

int main() {
	
	int n = 0, k = 0;
	
	cin >> n >> k;
	
	vector<int> vec;
	vector<int> tracker;
	vector<vector<int>> final;
	
	for (int i = 0; i < n; ++i) {
	    int val = 0;
	    cin >> val;
	    vec.push_back(val);
	}
	
	subsequence(n, k, 0, 0, vec, tracker, final);
	
	cout<< final.size() << "\n";
	
    for (int i = 0; i < final.size(); ++i) {
        for (int j = 0; j < final[i].size(); ++j) {
            cout << final[i][j] << " ";
        }
        cout << "\n";
    }

}
