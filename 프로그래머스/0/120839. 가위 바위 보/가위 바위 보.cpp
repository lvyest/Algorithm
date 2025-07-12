#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(char c : rsp){
       c == '2' ? answer+= '0' : c == '0' ? answer+= '5' : answer+= '2';  
    }
    return answer;
}