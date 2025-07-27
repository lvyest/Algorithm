#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());

    // 1. 평균과 인덱스를 묶어서 저장
    vector<pair<int, int>> avg_index;
    for (int i = 0; i < score.size(); i++) {
        int avg = (score[i][0] + score[i][1]);
        avg_index.push_back({avg, i});  // 총점 저장 (정수 비교 위해 2로 안 나눔)
    }

    // 2. 내림차순 정렬
    sort(avg_index.begin(), avg_index.end(), greater<>());

    // 3. 등수 매기기
    int rank = 1;
    for (int i = 0; i < avg_index.size(); i++) {
        if (i > 0 && avg_index[i].first == avg_index[i - 1].first) {
            // 이전 사람과 점수 같으면 같은 등수
            answer[avg_index[i].second] = answer[avg_index[i - 1].second];
        } else {
            answer[avg_index[i].second] = i + 1;
        }
    }

    return answer;
}
