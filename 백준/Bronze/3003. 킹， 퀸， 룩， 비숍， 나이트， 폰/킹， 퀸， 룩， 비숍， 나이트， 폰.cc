#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<int> base = { 1, 1, 2, 2, 2, 8 };
    vector<int> v(6);

    for (int i = 0; i < 6; i++) {
        cin >> v[i];
        v[i] = base[i] - v[i];
    }

    for (int result : v) { cout << result << " "; }

}