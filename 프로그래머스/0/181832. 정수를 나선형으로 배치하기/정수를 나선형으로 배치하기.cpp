#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n));
    
    int num = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (num <= n * n) {
        // 오른쪽으로
        for (int i = left; i <= right; i++) {
            answer[top][i] = num++;
        }
        top++;  // 위쪽 줄 하나 줄이기

        // 아래로
        for (int i = top; i <= bottom; i++) {
            answer[i][right] = num++;
        }
        right--;  // 오른쪽 줄 하나 줄이기

        // 왼쪽으로
        for (int i = right; i >= left; i--) {
            answer[bottom][i] = num++;
        }
        bottom--;  // 아래쪽 줄 하나 줄이기

        // 위로
        for (int i = bottom; i >= top; i--) {
            answer[i][left] = num++;
        }
        left++;  // 왼쪽 줄 하나 줄이기
    }

    return answer;
}
