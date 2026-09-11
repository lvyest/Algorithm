#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    int ver = 1; // ver 1일 때는 홀수, 2일 때는 짝수
    for(int k = 0; k < s.length(); k++){
        if(s[k] == ' ') {
            ver = 1;
        }
        else if(ver == 1){
            s[k] = toupper(s[k]);
            ver = 2;
        }
        else {
            s[k] = tolower(s[k]);
            ver = 1;
        }
    }
    return s;
    
}