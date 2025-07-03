#include <iostream>

using namespace std;

int main(void) {
    int N,n;

    cin >> N;

    for (n = 1; n < 10; n++) {
        cout << N << " * " << n << " = " << N * n << endl;
    }

    return 0;

}