#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(int i = 0; i < picture.size(); i ++){
        string s ="";
        for(int t = 0; t<picture[i].length(); t++){
            for(int j = 0; j < k; j++){
                s += picture[i][t];   
            } 
        }
        for(int j = 0; j < k; j++){
            answer.push_back(s);
        }
    }
    return answer;
}