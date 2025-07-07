#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int arr[9];
    int max = 0;
    int maxidx = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxidx = i;
        }
    }

    cout << max << endl << maxidx + 1;
}