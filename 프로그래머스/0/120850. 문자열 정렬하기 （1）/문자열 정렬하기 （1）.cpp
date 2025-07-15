#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] == '0' || my_string[i] == '1' || my_string[i] == '2' || my_string[i] == '3' || my_string[i] == '4' || my_string[i] == '5' || my_string[i] == '6'|| my_string[i] == '7' || my_string[i] == '8' || my_string[i] == '9')
            answer.push_back(my_string[i] - '0');
    }
    sort(answer.begin(), answer.end());
    return answer;
}