#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(n , x);

    for(int i = 0; i < answer.size(); i ++){
        answer[i] += x * i;
    }
    return answer;
}
