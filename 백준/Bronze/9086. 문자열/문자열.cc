#include <string>
#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string S; 
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> S;
        cout << S[0] << S[S.size() - 1] << endl;
    }
}