#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    for(int i = 0; i < is_prefix.length(); i++){
        if(my_string[i] != is_prefix[i]) break;
        else if(i == is_prefix.length()-1) answer = 1;
    }
    return answer;
}