#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < n; j++){
            if(s[i] == 'z' || s[i] == 'Z') s[i] -= 25;
            else if(s[i] == ' ') continue;
            else { 
                s[i] += 1;             
            }
        }
    }
    return s;
}