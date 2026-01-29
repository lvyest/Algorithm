#include <bits/stdc++.h>
using namespace std;

int N;
long long K;
vector<int> A, tmp;
long long cnt = 0;
int answer = -1;

void merge_sort(int p, int r) {
    if (p >= r) return;

    int q = (p + r) / 2;
    merge_sort(p, q);
    merge_sort(q + 1, r);

    int i = p, j = q + 1, t = 0;

    while (i <= q && j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while (i <= q) tmp[t++] = A[i++];
    while (j <= r) tmp[t++] = A[j++];

    i = p;
    t = 0;
    while (i <= r) {
        A[i] = tmp[t];
        cnt++;
        if (cnt == K) answer = tmp[t];
        i++; t++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    A.resize(N);
    tmp.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    merge_sort(0, N - 1);

    cout << answer << '\n';
    return 0;
}
