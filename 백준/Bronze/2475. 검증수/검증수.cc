#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int result = 0;
    for (int i = 0; i < 5; i++){
        int n;
        cin >> n;

        result += n*n;
    }

    cout << result % 10;
    return 0;
}
