#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    denum1 *= num2;
    denum2 *= num1;
    num1 *= num2;
    int top = denum1 + denum2;
    int bottom = num1;
    for(int i = 2; i <= bottom;){
        if(bottom == 1) break;
        if((top % i == 0) && (bottom % i == 0)){
            top /= i;
            bottom /= i;
        }
        else
            i++;
    }
    answer.push_back(top);
    answer.push_back(bottom);
    return answer;
}