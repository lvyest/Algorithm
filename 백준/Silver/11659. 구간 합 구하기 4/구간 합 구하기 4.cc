#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N, M;
    cin>> N >> M;
    vector<int> s(N+1);

    for(int i = 1; i <= N; i++){
        int k;
        cin >> k;
        s[i] = s[i-1] + k;  
    }

    while(M--){
        int a, b;
        cin >> a >> b;
        cout << s[b] - s[a-1] << '\n';
    }
}