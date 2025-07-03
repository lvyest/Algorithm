#include <iostream>

using namespace std;

int main() {
    const int NUM = 9999;
    int T;

    cin >> T;

    int A[NUM], B[NUM];

    for (int i = 0; i < T; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < T; i++) {
        cout << A[i] + B[i] << endl;
    }

    return 0;
}