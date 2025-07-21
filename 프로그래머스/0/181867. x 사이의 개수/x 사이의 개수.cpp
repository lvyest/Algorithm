#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int sum = 0; 
    for(int i = 0; i < myString.length(); i++){
        if(myString[i]=='x'){
            answer.push_back(sum);
            sum = 0; 
        }
        else {sum ++;}
    }
    answer.push_back(sum);
    return answer;
}