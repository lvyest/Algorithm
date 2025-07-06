#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, X;
    int A[10000];
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if (A[i] < X) cout << A[i] << " ";
    }
}