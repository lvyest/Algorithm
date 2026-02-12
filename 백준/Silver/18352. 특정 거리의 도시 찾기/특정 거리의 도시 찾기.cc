#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K, X;
    cin >> N >> M >> K >> X;

    vector<vector<int>> graph(N + 1);
    vector<int> dist(N + 1, INF);

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    dist[X] = 0;
    pq.push({0, X});

    while (!pq.empty()) {
        int curDist = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        if (curDist > dist[curNode]) continue;

        for (int next : graph[curNode]) {
            if (dist[next] > curDist + 1) {
                dist[next] = curDist + 1;
                pq.push({dist[next], next});
            }
        }
    }

    bool found = false;
    for (int i = 1; i <= N; i++) {
        if (dist[i] == K) {
            cout << i << "\n";
            found = true;
        }
    }

    if (!found) cout << -1;

    return 0;
}
