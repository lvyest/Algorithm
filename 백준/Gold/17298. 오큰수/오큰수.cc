#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n;
    cin >> n;

    //인덱스저장 스택
    stack<int> s;

    //입력받은 배열 요소값
    vector<int> v(n);

    //결과 저장 배열
    vector<int> a(n, -1);

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        while (!s.empty() && v[s.top()] < v[i]) {
            a[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";


}
