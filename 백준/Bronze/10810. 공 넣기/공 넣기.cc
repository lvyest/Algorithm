#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, M, i, j, k;

    cin >> N >> M;
    vector<int> box(N);

    for (int a = 0; a < M; a++) {
        cin >> i >> j >> k;
        for (int b = i - 1; b < j; b++) {
            box[b] = k;
        }
    }

    for (int num : box) {
        cout << num << " ";
    }
}