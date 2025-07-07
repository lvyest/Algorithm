#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    /* 내 풀이
    int answer = 0;
    int i = 1;
    while((slice * i) / n < 1){
        i ++;
    }
    answer = i;
    return answer;
    */
    
    int answer = n / slice;
    if (n % slice != 0) answer ++; 
    return answer;
}