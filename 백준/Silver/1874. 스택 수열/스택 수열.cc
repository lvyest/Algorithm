#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, next = 1;
    cin >> n;

    vector<char> result;
    stack<int> stack;
    for(int i = 0; i < n; i ++){
        int need;
        cin >> need;

        while(next <= need){
            stack.push(next);
            result.push_back('+');
            next++;
        }
        if(stack.empty() || stack.top() != need){
            cout << "NO\n";
            return 0;
        }
        stack.pop();
        result.push_back('-');
    }

    for(char c : result){
        cout << c << '\n';
    }
    return 0;
}