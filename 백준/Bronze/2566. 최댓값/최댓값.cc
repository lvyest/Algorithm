#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    int max[3] = {-1,0,0};
    for (int i = 0; i < 9; i++) {
        for (int t = 0; t < 9; t++) {
            cin >> n;
            if (n > max[0]) {
                max[0] = n;
                max[1] = i + 1;
                max[2] = t + 1;
            }
        }
    }

    cout << max[0] << endl << max[1] << " " << max[2];
}
