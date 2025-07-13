#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int i = 1;
    while(true){
        if(k*i > n) break;
        answer.push_back(k*i);
        i++;
    }
    return answer;
}