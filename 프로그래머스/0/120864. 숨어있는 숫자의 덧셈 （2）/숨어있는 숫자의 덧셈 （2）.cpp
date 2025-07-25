#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string nature = ""; 
    for (int i = 0 ; i < my_string.length(); i++){
        if(isdigit(my_string[i])){
            nature += my_string[i]; 
            if(isdigit(my_string[i+1])){
                continue;
            }
            answer += stoi(nature);
            nature = "";
        }
    }
    return answer;
}