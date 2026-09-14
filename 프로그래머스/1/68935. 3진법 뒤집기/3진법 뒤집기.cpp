#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int result = 0;
    string thr = "";
    //3진법, 앞뒤 반전
    while (n > 0) {
        thr += to_string(n % 3);
        n /= 3;
    }
    
    int c = 0;
    //10진법
    for(int i = thr.size()-1; i >= 0; i--){
        result += (thr[i]-'0') * pow(3, c);
        c++;
    }
    
    return result;
}