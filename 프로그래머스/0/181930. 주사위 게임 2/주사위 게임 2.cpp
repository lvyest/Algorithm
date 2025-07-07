#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    // 기본 = 전부 다름
    int answer = a+b+c;
    if(a==b){
        //전부 동일
        if(b==c) answer *= a*a*a + b*b*b + c*c*c; 
        //c만 다름
        answer *= a*a+b*b+c*c;
    }
    //b만 다름 or a만 다름
    else if(a==c || b==c) answer *= a*a+b*b+c*c;
                
    return answer;
}