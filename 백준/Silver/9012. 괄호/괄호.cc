#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n;
    cin >> n;
    while (n--) {
        string s;
        int count = 0;
        bool flag = true;

        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            s[i] == '(' ? count++ : count--;
            if (count < 0) {
                flag = false;
                break;
            }
        }
        if (count != 0) flag = false;
        
        cout << (flag ? "YES" : "NO") << "\n";
    }
}
