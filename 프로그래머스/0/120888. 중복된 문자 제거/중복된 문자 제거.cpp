#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> flag; 
    for(int i = 0; i < my_string.size(); i++){
        auto it = find(flag.begin(), flag.end(), my_string[i]);
        if(it == flag.end()) {
            flag.push_back(my_string[i]);
            answer += my_string[i];
        }
    }
    return answer;
}