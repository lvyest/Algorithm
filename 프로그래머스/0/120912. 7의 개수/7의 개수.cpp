#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++){
        string s = to_string(array[i]);
         for(int t = 0; t < s.size(); t++){
              if(s[t] == '7') answer ++;
}
    }
    return answer;
}