#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i = 0; i < strArr.size(); i++){
        bool flag = true;
        for(int t = 0; t < strArr[i].length()-1; t++){
             if(strArr[i][t]=='a' && strArr[i][t+1]=='d'){ 
                flag = false;
                break;
             }
        }
        if(flag){
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}