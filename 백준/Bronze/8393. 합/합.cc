#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        result = i + result;
    }
    
    cout << result;

    return 0;
}