#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0, var;
    if(hp >= 5) {
        answer += hp / 5;
        hp = hp % 5;
        if(hp >= 3) {
            answer += hp / 3 + hp % 3;
        }
        else {
            answer += hp;
        }
    }
    else if(hp >= 3){
        answer += hp / 3 + hp % 3;
    }
    else {
        answer += hp;
    }
    
    return answer;
}