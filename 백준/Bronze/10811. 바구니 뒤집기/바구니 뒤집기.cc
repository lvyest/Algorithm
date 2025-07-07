#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, M, i, j;

    cin >> N >> M;
    vector<int> box(N + 1);
    for (int n = 1; n <= N; n++) {
        box[n] = n;
    }

    for (int n = 0; n < M; n++) {
        cin >> i >> j;
        reverse(box.begin() + i, box.begin() + j + 1);
    }

    for (int n = 1; n <= N; n++) {
        cout << box[n] << " ";
    }

}