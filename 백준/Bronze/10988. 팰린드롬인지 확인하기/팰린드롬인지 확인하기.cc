#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string S;
    cin >> S;

    for (int i = 0; i < S.length()/2; i++) {
        if (S[i] != S[S.length()-1-i]) {
            cout << 0; 
            return 0;
        }
    }
    cout << 1;
    return 0;
}