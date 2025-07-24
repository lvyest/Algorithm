#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int, int>> valid; // (rank, index)

    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) {
            valid.push_back({rank[i], i});
        }
    }

    // rank 기준으로 오름차순 정렬
    sort(valid.begin(), valid.end());

    // 가장 rank가 낮은(우수한) 3명의 index 사용
    int a = valid[0].second;
    int b = valid[1].second;
    int c = valid[2].second;

    return 10000 * a + 100 * b + c;
}
