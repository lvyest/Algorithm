#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, M, i, j;
    cin >> N >> M;
    
    vector<int> box(N);

    for (int a = 0; a < N; a++) {
        box[a] = a+1;
    }

    for (int a = 0; a < M; a++) {
        cin >> i >> j;
        int temp = box[i-1];
        box[i-1] = box[j-1];
        box[j-1] = temp;
    }

    for (int num : box) {
        cout << num << " ";
    }
}