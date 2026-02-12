#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int a, b;
        for (int i = 0; i < M; i++) {
            cin >> a >> b;  // 입력은 그냥 받기만
        }

        cout << N - 1 << "\n";
    }

    return 0;
}
