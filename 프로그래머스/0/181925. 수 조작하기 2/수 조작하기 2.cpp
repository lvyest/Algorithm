#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for(int i =1; i<numLog.size(); i++){
        int n = numLog[i]-numLog[i-1];
        if(n == 1) answer += "w";
        if(n == -1) answer += "s";
        if(n == 10) answer += "d";
        if(n == -10) answer += "a";
    }
    return answer;
}