#include <bits/stdc++.h>
using namespace std;

int N;
int ans = 0;

bool col[15];       
bool diag1[30];     
bool diag2[30];     

void backtrack(int row) {
    if (row == N) {
        ans++;
        return;
    }

    for (int c = 0; c < N; c++) {
        if (col[c] || diag1[row + c] || diag2[row - c + N - 1])
            continue;

        col[c] = true;
        diag1[row + c] = true;
        diag2[row - c + N - 1] = true;

        backtrack(row + 1);

        col[c] = false;
        diag1[row + c] = false;
        diag2[row - c + N - 1] = false;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N;
    backtrack(0);
    cout << ans;
}
