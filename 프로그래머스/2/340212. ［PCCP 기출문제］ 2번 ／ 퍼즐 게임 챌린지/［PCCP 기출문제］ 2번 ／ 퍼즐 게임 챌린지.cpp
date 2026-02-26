#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// diff : 현재 퍼즐 난이도
// time_cur : 현재 퍼즐 소요 시간
// time_prev : 이전 퍼즐 소요 시간
// level : 숙련도 
// limit : 전체 제한 시간 

// diff <= level : time_cur <- 모든 level이 다 이거라면 항상 똑같이 만족, 
// diff > level : (time_cur + time_prev)(diff - level) + time_cur <- 이걸 만족하는 애들을 구해야겠네
// 1 <= level <= max(diff)
// diffs : 퍼즐의 난이도 순서대로 담은 배열  
// times : 퍼즐의 소요시간을 순서대로 담음 

// level의 최솟값


bool test(long long level, vector<int>& diffs, vector<int>& times, long long limit){
    long long usetime = 0;
    for(int i = 0; i <diffs.size(); i ++){
        if(diffs[i] <= level || i == 0) {
            usetime += times[i];
        }
        else {
            usetime += (diffs[i] - level) * (times[i] + times[i-1]) + times[i];
        }
        
        if(usetime > limit) return 0;
    }
    
    return 1;
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer;
    //이분 탐색
    long long left = 1;
    long long right = *max_element(diffs.begin(), diffs.end());

    while(left <= right){
        long long mid = (left + right) / 2;

        if (test(mid, diffs, times, limit)){
            answer = mid;
            right = mid - 1; //더 작아도 되는지 확인
        }
        else {
            left = mid + 1; //더 커야겠네!
        }
    }
    return answer;
}

