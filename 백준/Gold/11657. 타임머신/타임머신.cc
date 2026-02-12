#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int from, to;
    long long cost;
};

const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<Edge> edges;
    vector<long long> dist(N+1, INF);

    for(int i=0;i<M;i++){
        int A,B;
        long long C;
        cin >> A >> B >> C;
        edges.push_back({A,B,C});
    }

    dist[1] = 0;

    
    for(int i=1;i<=N-1;i++){
        for(auto &e : edges){
            if(dist[e.from] != INF &&
               dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
            }
        }
    }

    // 음수 사이클 검사
    for(auto &e : edges){
        if(dist[e.from] != INF &&
           dist[e.to] > dist[e.from] + e.cost){
            cout << -1;
            return 0;
        }
    }

    for(int i=2;i<=N;i++){
        if(dist[i] == INF) cout << -1 << "\n";
        else cout << dist[i] << "\n";
    }
}
