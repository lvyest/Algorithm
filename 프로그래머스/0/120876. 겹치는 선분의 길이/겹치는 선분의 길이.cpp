#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int max_val = -101, min_val = 101, answer = 0;
    
    // 전체 범위 찾기
    for(int i = 0; i < lines.size(); i++) {
        if(lines[i][0] < min_val) min_val = lines[i][0];
        if(lines[i][1] > max_val) max_val = lines[i][1];
    }
    
    // 각 단위 구간에 대해 몇 개의 선분이 포함되는지 카운트
    vector<int> count(max_val - min_val);
    
    for(int i = 0; i < lines.size(); i++) {
        for(int j = lines[i][0]; j < lines[i][1]; j++) { 
            count[j - min_val]++;
        }
    }
    
    // 2개 이상의 선분이 겹치는 구간의 길이 계산
    for(int i = 0; i < count.size(); i++) {
        if(count[i] >= 2) {
            answer++;
        }
    }
    
    return answer;
}