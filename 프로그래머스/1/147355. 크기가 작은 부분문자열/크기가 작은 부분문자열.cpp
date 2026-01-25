#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i <= t.length()-p.length(); i++){
        string s;
        for(int j = 0; j < p.length(); j++){
            s += t[i+j];
        }
        if(stoll(s) <= stoll(p)){
            answer++;
        }
    }
    return answer;
}