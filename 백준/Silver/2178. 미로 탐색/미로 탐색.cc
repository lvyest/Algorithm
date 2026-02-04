#include <bits/stdc++.h>
using namespace std;

int N, M;
int maze[101][101];
bool vis[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        for(int j = 0; j < M; j++){
            maze[i][j] = s[j] - '0';
        }
    }

    queue<pair<int,int>> Q;
    Q.push({0, 0});
    vis[0][0] = true;

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        int x = cur.first;
        int y = cur.second;

        for(int dir = 0; dir < 4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(vis[nx][ny] || maze[nx][ny] == 0) continue;

            vis[nx][ny] = true;
            maze[nx][ny] = maze[x][y] + 1;
            Q.push({nx, ny});
        }
    }

    cout << maze[N-1][M-1];
}
