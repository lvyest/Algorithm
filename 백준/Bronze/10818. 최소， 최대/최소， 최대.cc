#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N;
    int Max = -1000000; 
    int Min = 1000000;
    int A[1000000];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        if (A[i] > Max) Max = A[i];
        if (A[i] < Min) Min = A[i];
    }

    cout << Min << " " << Max;
}