#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    map<string, int> flags;

    for (int i = 0; i < N + M; i++) {
        string name;
        cin >> name;

        if (flags.find(name) != flags.end()) flags[name]++;
        else flags[name] = 0;
    }

    int count = 0;
    vector<string> result;
    for (auto it = flags.begin(); it != flags.end(); it++) {
        if (it->second > 0) {
            count++;
            result.push_back(it->first);
        }
    }
    cout << count << "\n";

    for (auto& r : result) {
        cout << r << "\n";
    }
}