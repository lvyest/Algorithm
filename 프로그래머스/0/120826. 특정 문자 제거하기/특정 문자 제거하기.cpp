#include <string>
#include <vector>
#include <string.h>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++){
         if(my_string[i]==letter[0]){
             continue;
         }
        answer += my_string[i];
    }
    return answer;
}