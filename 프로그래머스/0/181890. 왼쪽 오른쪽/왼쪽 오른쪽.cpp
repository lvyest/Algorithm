#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    for(int i = 0; i < str_list.size(); i++){
        if(str_list[i] == "r"){
            for(int t = i+1; t <str_list.size(); t++){
                answer.push_back(str_list[t]);
            }
            break;
        }
        else if(str_list[i] == "l"){
            for(int t = 0; t < i; t++){
                answer.push_back(str_list[t]);
            }
            break;
        }
    }
    
    return answer;
}