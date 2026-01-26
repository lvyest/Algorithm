#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;;

vector<int> selection_sort(vector<int> arr) {
    int count = 0;
    for (int i = arr.size()-1; i > 0; i--){
        int Max = i;
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] > arr[Max]){
                Max = j;
            }
        }
        
        if(arr[i] < arr[Max]){
            count ++;
            if(count == K){
                cout << arr[i] << " " << arr[Max] << "\n";
                return arr;
            }
            swap(arr[i], arr[Max]);
        }
    }
    if(count < K){
        cout << -1 << "\n";
    }
    return arr;
}

int main(){
    cin >> N >> K;

    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    arr = selection_sort(arr);
}