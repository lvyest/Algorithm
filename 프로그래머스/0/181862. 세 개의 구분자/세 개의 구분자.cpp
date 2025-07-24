#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string s = "";
    for(int i = 0 ; i<myStr.length(); i++){
    
    if(myStr[i]=='a'|| myStr[i]=='b' || myStr[i]=='c'){
        if(s.empty()){continue;}
        else {
            answer.push_back(s);
            s = "";
        }
    }
    else s += myStr[i];
}
    if(s.empty()) {
        if(answer.empty()) answer.push_back("EMPTY");
}
    else answer.push_back(s);

    return answer;
}