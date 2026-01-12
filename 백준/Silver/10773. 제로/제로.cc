#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            if (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(x);
        }
    }
    
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }

    cout << sum << endl;
    return 0;
}
