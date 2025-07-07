#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<bool> std(30);
    int n;
    for (int i = 0; i < 28; i++) {
        cin >> n;
        std[n - 1] = true;
    }

    for (int i = 0; i < 30; i++) {
        if (std[i] == false)
            cout << i + 1 << endl;
    }
}