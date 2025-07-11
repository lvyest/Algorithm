#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, M, n;
    cin >> N >> M;
    vector<vector<int>> v1(N, vector<int>(M));
    vector<vector<int>> v2(N, vector<int>(M));
    vector<vector<int>> result(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int t = 0; t < M; t++) {
            cin >> n;
            v1[i][t] = n;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int t = 0; t < M; t++) {
            cin >> n;
            v2[i][t] = n;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int t = 0; t < M; t++) {
            result[i][t] = v1[i][t]+v2[i][t];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int t = 0; t < M; t++) {
            cout << result[i][t] << " ";
        }
        cout << endl;
    }
}
