#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int age) {
    map <char, string> m = { {'0', "a"}, {'1', "b"}, {'2', "c"}, {'3', "d"}, {'4', "e"}, {'5', "f"}, {'6', "g"}, {'7', "h"}, {'8', "i"}, {'9', "j"} };

    string answer = "";
    string s_age = to_string(age);
    
    for(int i = 0; i < s_age.length(); i++){
        answer+=m[s_age[i]];
    }
    
    return answer;
}