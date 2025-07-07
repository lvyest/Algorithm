#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i < 999; i++){
        if ((6 * i) % n == 0){
            answer = i;
            break;
        }
        else if(i==998){
            break;
        }
    } 
    //(6 * result)은 n의배수 : 가장 작은 result  
    return answer;
}