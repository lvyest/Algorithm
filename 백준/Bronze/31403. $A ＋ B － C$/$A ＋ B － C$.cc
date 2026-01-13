#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int a, b, c;

    cin >> a >> b >> c;

    cout << a + b - c << '\n';

    string ab = to_string(a) + to_string(b);
    cout << stoi(ab) - c << '\n';

    return 0;
}
