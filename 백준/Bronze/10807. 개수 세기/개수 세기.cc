#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, v;
    int count = 0;
    vector<int> array;
    cin >> N;
    array.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    
    cin >> v;

    for (int i : array) {
        if (i == v) {
            count += 1;
        }
    }

    cout << count;

}