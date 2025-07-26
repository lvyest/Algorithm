#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    for(int i = 0; i <= 2; i++){
        for(int t = i + 1; t <= 3; t++){
            
            //다른 두 점
            vector<vector<int>> noselects;
            for(int k = 0; k <= 3; k++){
                if(i == k || t == k) continue;
                noselects.push_back(dots[k]);
            } 
            
            if((dots[i][0] - dots[t][0]) * (noselects[0][1] - noselects[1][1]) == (noselects[0][0] - noselects[1][0]) * (dots[i][1] - dots[t][1])){
                return 1;
            }
        }
    }
    return 0;
}