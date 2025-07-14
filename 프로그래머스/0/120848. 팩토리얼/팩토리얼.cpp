#include <string>
#include <vector>

using namespace std;

int factorial(int n){
    if(n==1) return 1;
    else return factorial(n-1)*n;
}

int solution(int n) {
    int answer = 1;
    while(true){
        if(factorial(answer) > n) return answer-1;
        answer ++;
    }
}