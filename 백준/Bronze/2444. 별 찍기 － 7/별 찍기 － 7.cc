#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int k = 1 + 2*(i);
        for (int t = 0; t < N - i - 1; t++) {
            cout << " ";
        }
        for (int t = 0; t < k; t++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        int k = 2 * N - 2 * i - 2;
        for (int t = 0; t < i + 1; t++) {
            cout << " ";
        }
        for (int t = 0; t < k-1; t++) {
            cout << "*";
        }
        cout << endl;
    }

}