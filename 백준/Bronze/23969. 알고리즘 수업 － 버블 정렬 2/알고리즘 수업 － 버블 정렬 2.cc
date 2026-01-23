#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
int N, K;

vector<int> bubble_sort(vector<int> v){
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j+1]);
                cnt++;
                if(cnt == K){
                    return v;
                }
            }
        }
    }
    return {};
}

int main(){
    cin>> N >> K;
    vector<int> v(N);
    for(int i = 0; i < N; i++) cin >> v[i];

    vector<int> result = bubble_sort(v);

    if(result.empty()){
        cout << -1;
    }
    else {
        for(int x : result) cout << x << " ";
    }
}