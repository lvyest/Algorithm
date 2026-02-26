#include <vector>
#include <queue>
#include <algorithm>

using namespace std;


int solution(vector<vector<int>> land) {
    int n = land.size(); 
    int m = land[0].size();
    
    vector<int> compSize(1); //땅 크기 저장, index 0 안씀
    int compId = 0; //땅 번호 
    
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            if(land[i][j] == 1){
                compId++; //새로운 땅번호 
                
                queue<pair<int,int>> q;
                q.push({i, j});
                land[i][j] = compId + 1; //땅 번호 + 1(방문표시 의미인 1이랑 구분)
                int size = 1;
                
                //BFS
                while(!q.empty()){
                    auto [y, x] = q.front();
                    q.pop();
                    
                    for(int d = 0; d < 4; d++){
                        int ny = y + dy[d];
                        int nx = x + dx[d];
                        
                        if(ny>=0 && ny<n && nx>=0 && nx<m && land[ny][nx] ==1){
                            land[ny][nx] = compId + 1;
                            q.push({ny, nx});
                            size++;
                        }
                    }
                }
                
                compSize.push_back(size); //땅 총 크기 저장 
            }
        }
    }
    
    int answer = 0;
    
    //열마다 최대 석유량 계산 
    for(int col = 0; col < m; col++){
        vector<bool> used(compId+2, false); 
        //계산한 땅인지 체크 : 인덱스 따라 가기때문에 +2해줘야지 인덱스와 comId가 맞음!
        
        int sum = 0;
        for(int row = 0; row < n; row++){
            int id = land[row][col];
            
            if(id>1 && !used[id]){
                used[id] = true;
                sum += compSize[id-1]; // land에는 compId+1이 저장되어 있으므로 id-1
            }
        }
        
        answer = max(answer, sum);
    }
    return answer;
}