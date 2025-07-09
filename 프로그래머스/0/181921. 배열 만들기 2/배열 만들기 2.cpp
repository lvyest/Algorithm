#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> result;
    bool flag = false;
    for(int i = l; i<=r; i++){
        string s = to_string(i);
        for(int t = 0; t<s.length(); t++){
            if(s[t]!='5' && s[t]!='0') break;
            else if(t == s.length()-1) result.push_back(i);    
        }
    }
    
    if(result.empty() == true) result.push_back(-1); 
    
    return result;     
}