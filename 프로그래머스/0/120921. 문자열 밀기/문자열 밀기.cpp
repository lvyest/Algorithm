#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    string var = A;
    
    while(true){
        if(var == B) return answer;
        if(answer == A.length()) break;
        
        string s = "";
        //오른쪽으로 한칸이동
        s += var[var.length()-1];
        for(int i = 0; i < var.length()-1; i ++){
            s += var[i];
        }
        answer++;
        var = s;
    }
    return -1;
}