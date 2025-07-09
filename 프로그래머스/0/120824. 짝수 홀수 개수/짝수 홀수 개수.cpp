#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = {0, 0};
    for(int num: num_list) {
        num%2==0 ? answer[0]++ : answer[1]++;
    }
    return answer;
}