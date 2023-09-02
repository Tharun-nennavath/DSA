#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        sort(A.rbegin(), A.rend()); // Sort the array in descending order
        
        int maxSum = A[0];
        for (int i = 1; i < N; i++) {
            if (A[i] != A[i - 1]) {
                maxSum += A[i];
                break; // Stop after finding the second distinct element
            }
        }
        
        cout << maxSum << endl;
    }
    
    return 0;
}
