#include <string>
#include <vector>

using namespace std;

//(6 * result)은 n의배수 : 가장 작은 result  

int solution(int n) {
    int answer = 0;
    int i = 1;
    while((6 * i) % n != 0){
        i++;
    }
    answer = i;
    return answer;
}