#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    double max = 0.0;
    cin >> N;

    vector<double> score(N);
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    for (int num : score) {
        if (num > max) max = num;
    }

    for (int i = 0; i < N; i++) {
        score[i] = score[i] / max * 100;
    }
    
    cout << accumulate(score.begin(), score.end(), 0.0)/N;

}