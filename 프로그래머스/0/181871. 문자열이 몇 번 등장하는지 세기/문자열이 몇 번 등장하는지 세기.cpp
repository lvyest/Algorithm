#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i= 0; i < myString.length(); i++){
        for(int t = 0; t < pat.length(); t++){
            if(myString[i+t] != pat[t]){ break; }
            else if(t == pat.length()-1) answer++;
        }
    }
    return answer;
}