#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string result;
    for(int i = 0; i < intStrs.size(); i++){
        for(int t = s; t < s+l; t++){
            result += intStrs[i][t];
            if(k < stoi(result)) answer.push_back(stoi(result));
        }
        result = "";
    }
    return answer;
}