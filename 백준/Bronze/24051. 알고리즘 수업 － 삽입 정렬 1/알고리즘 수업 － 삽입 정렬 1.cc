#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;

    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long long cnt = 0;

    for (int i = 2; i <= N; i++) {
        int newItem = A[i];
        int loc = i - 1;

        while (loc >= 1 && newItem < A[loc]) {
            A[loc + 1] = A[loc];
            cnt++;

            if (cnt == K) {
                cout << A[loc] << '\n';
                return 0;
            }
            loc--;
        }

        if (loc + 1 != i) {
            A[loc + 1] = newItem;
            cnt++;

            if (cnt == K) {
                cout << newItem << '\n';
                return 0;
            }
        }
    }

    cout << -1 << '\n';
    return 0;
}
