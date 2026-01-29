#include <bits/stdc++.h>
using namespace std;

int N; 
long long K;
vector<long long> A;
long long cnt = 0;
bool done = false;

//교환 기록 
void record(long long x, long long y) {
    cnt++;
    if (cnt == K) {
        cout << min(x, y) << " " << max(x, y);
        done = true;
    }
}


//Lomuto 방식 partition
int partition(int p, int r) {
    long long x = A[r]; //맨 오른쪽 원소를 기준으로, 비교해야되니까 변수에 넣어둠 
    int i = p - 1; //피봇 이하 영역
    for (int j = p; j <= r - 1; j++) { //분류되지않은 원소 탐색
        if (A[j] <= x) { //
            i++;
            record(A[i], A[j]);
            swap(A[i], A[j]);
            if (done) return 0;
        }
    }
    if (i + 1 != r) {
        record(A[i + 1], A[r]);
        swap(A[i + 1], A[r]);
    }
    return i + 1;
}

void quick_sort(int p, int r) {
    if (p < r && !done) {
        int q = partition(p, r);
        quick_sort(p, q - 1);
        quick_sort(q + 1, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    A.resize(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    quick_sort(0, N - 1);

    if (!done) cout << -1;
}
