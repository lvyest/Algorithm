#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
  
    //기약분수로 만들기
    int n = min(a, b);
    while(n > 1){
        while(a % n == 0 && b % n == 0){
            a /= n;
            b /= n;
        }
        n--;
    }

    while(b % 2 == 0) b /= 2; 
    while(b % 5 == 0) b /= 5;
    
    return b == 1 ? 1 : 2;
}