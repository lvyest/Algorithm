#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string s_num = to_string(num);

    for(int i = 0; i < s_num.length(); i++){
        if(s_num[i] == k + '0') {
            answer = i + 1;
            break;
        }
    }
    return answer;
}