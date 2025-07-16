#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string s_order = to_string(order);
    for(int i = 0; i < s_order.length(); i++){
        if(s_order[i] == '3' || s_order[i] == '6'|| s_order[i] == '9'){
            answer += 1;
        }
    }
    return answer;
}