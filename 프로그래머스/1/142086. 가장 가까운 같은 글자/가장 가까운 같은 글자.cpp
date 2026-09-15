#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> count(26, -1);
    
    for(int i = 0; i < s.length(); i++){
        if(count[s[i]-'a']!= -1) {
            answer.push_back(i-count[s[i]-'a']);
        } 
        else {
            answer.push_back(count[s[i]-'a']);
        }
        count[s[i]-'a'] = i;
    }
    return answer;
}