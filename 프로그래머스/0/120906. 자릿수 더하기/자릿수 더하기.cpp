#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s_n = to_string(n);
    for(int i = 0; i < s_n.length(); i++){
        answer += s_n[i] - '0';
    }
    return answer;
}