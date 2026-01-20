#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, K, max = -10000001;
    cin >> N >> K;

    vector<int> v;

    for(int i = 0; i < N; i++){
        int n;
        cin >> n;

        v.push_back(n);
    }

    for(int i = v.size()-1; i >= K-1; i--){
        int sum = v[i];
        for (int j = 1; j < K; j++){
            sum += v[i-j];
        }

        if (max < sum){
            max = sum; 
        }
    }
    cout << max;
}