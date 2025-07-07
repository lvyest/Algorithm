#include <string>
#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, num;
    set<int> result;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        n = num % 42;
        result.insert(n);
    }
    cout << result.size();
}