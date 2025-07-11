#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for (int i = 0; i < my_string.length(); i++){
        string s = "";
        for(int t = i; t < my_string.length(); t++){
            s += my_string[t];
        }
        answer.push_back(s);
    }
    sort(answer.begin(), answer.end());
    return answer;
}