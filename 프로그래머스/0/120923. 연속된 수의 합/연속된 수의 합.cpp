#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    for (int start = -1000; start <= 1000; start++) { 
        int sum = 0;
        for (int i = 0; i < num; i++) {
            sum += start + i;
        }
        if (sum == total) {
            for (int i = 0; i < num; i++) {
                answer.push_back(start + i);
            }
            return answer;
        }
    }
    return answer;
}