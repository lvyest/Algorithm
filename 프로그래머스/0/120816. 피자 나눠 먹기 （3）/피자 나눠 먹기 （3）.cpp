#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int i = 1;
    while((slice * i) / n < 1){
        i ++;
    }
    answer = i;
    return answer;
}