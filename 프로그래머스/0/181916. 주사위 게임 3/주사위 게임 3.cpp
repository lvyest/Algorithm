#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> dice = {a, b, c, d};
    sort(dice.begin(), dice.end());
    set<int> s(dice.begin(), dice.end());

    if (s.size() == 1) {
        return 1111 * dice[0]; // pppp
    }
    if (s.size() == 2) {
        if (dice[1] == dice[2]) {
            // pppq
            int p = dice[1], q = (dice[0] == p ? dice[3] : dice[0]);
            return pow(10 * p + q, 2);
        } else {
            // ppqq
            return (dice[0] + dice[3]) * abs(dice[0] - dice[3]);
        }
    }
    if (s.size() == 3) {
        if (dice[0] == dice[1]) return dice[2] * dice[3]; // ppqr
        if (dice[1] == dice[2]) return dice[0] * dice[3];
        return dice[0] * dice[1];
    }
    return dice[0]; // 모두 다름
}
