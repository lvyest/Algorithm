#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool vis[1001];
int N, M, V;

void dfs(int start){
    stack<int> S;
    S.push(start);

    while(!S.empty()){
        int cur = S.top(); S.pop();

        if(vis[cur]) continue;
        vis[cur] = true;
        cout << cur << ' ';

        for(int i = adj[cur].size() - 1; i >= 0; i--){
            int nxt = adj[cur][i];
            if(!vis[nxt])
                S.push(nxt);
        }
    }
}

void bfs(int start){
    queue<int> Q;
    Q.push(start);
    vis[start] = true;

    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        cout << cur << ' ';

        for(int nxt : adj[cur]){
            if(vis[nxt]) continue;
            vis[nxt] = true;
            Q.push(nxt);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> V;
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= N; i++)
        sort(adj[i].begin(), adj[i].end());

    dfs(V);
    cout << '\n';

    memset(vis, false, sizeof(vis));
    bfs(V);
}
