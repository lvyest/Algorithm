#include <string>

using namespace std;

bool solution(string s) {
    int s_length = s.length();
    if(s_length != 4 && s_length !=6) return 0;
    
    for (int i = 0; i < s_length; i++){
        if(s[i] < 48 || s[i] > 57) return 0;
    }
        
    return 1;
}