#include <string>
#include <vector>

using namespace std;

int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

int solution(vector<vector<int>> board) {
    int n = board.size();
    vector<vector<int>> danger(n, vector<int>(n, 0)); 
    
    for(int i = 0; i < n; i ++){
        for(int t = 0; t < n; t++){
            if(board[i][t] == 1){
                for(int d = 0; d < 9; d++){
                    int nx = i + dx[d];
                    int ny = t + dy[d];
                    if(nx >= 0 && ny >= 0 && nx < n && ny < n){
                        danger[nx][ny] = 1;
                    }
                }
            }
        }
    }
    
    int answer = 0; 
    for(int i = 0; i < n; i++){
        for(int t = 0; t < n; t++){
            if(danger[i][t] == 0){
                answer ++;
            }
        }
    }
    return answer;
}