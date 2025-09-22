#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, bool> flags;

    for (int i = 0; i < n; i++) {
        string name, flag;
        cin >> name >> flag;
    
        if (flag == "enter") flags[name] = true;
        else flags[name] = false;
    }
    
    for (auto it = flags.rbegin(); it != flags.rend(); it++) {
        if (it->second) cout << it->first << "\n";
    }
}
