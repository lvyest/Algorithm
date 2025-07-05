#include <string>
#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N-i-1; k++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        
        cout << "\n";
    }
}