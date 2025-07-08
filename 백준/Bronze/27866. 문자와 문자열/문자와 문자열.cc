#include <string>
#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string S; 
    int i;
    cin >> S;
    cin >> i;

    cout << S[i-1];
}