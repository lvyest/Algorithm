#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    string s = "";
    for(string c : spell){
        s += c;
    }
    sort(s.begin(), s.end());
    
    for(int i = 0; i < dic.size(); i ++){
        sort(dic[i].begin(), dic[i].end()); 
        if(s == dic[i]) return 1;
    }
    
    return 2;
}