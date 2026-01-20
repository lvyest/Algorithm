#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int k = x;    
    while(n--){
        answer.push_back(k);
        k += x;
    }
    return answer;
}