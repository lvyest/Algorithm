#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(const vector<int>& A, int target) {
    int left = 0;
    int right = A.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (A[mid] == target) {
            return true;          
        } 
        else if (A[mid] < target) {
            left = mid + 1;      
        } 
        else {
            right = mid - 1;      
        }
    }
    return false;                
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int M;
    cin >> M;

    while (M--) {
        int x;
        cin >> x;

        if (binarySearch(A, x))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}
