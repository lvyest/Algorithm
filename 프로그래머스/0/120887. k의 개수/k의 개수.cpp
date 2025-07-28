#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int t = i; t <= j; t++){
        string s = to_string(t);
        for(int f = 0; f < s.length(); f++) {
            if((s[f] - '0') == k){ 
                answer++;
            }
        }
    }
    return answer;
}