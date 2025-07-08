#include <string>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, sum = 0;
    string n = "";

    cin >> N;
    cin >> n;
    for (int i = 0; i < N; i++) {
        sum += n[i]- '0';
    }
    cout <<sum;
}