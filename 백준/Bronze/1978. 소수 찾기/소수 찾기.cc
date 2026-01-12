#include <iostream>
using namespace std;

int main() {
    /*소수: 1과 자기 자신만을 약수로 가지는 수*/
    int n, result = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x < 2) continue;

        bool flag = true;
        for(int j = 2;j <= x/2; j++) {
            if(x % j == 0){
                flag = false;
                break;
            }
        }
        if(flag) result++;
    }

    cout << result << endl;
    return 0;
}