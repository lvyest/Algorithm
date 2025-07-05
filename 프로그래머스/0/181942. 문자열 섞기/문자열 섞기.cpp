#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {    
    int n = str1.length();
    string answer = string(2 * n, '*');

    answer[0] = str1[0];
    for(int i=1; i < n; i++){
        answer[2*i] = str1[i];
    }
    for(int i=0; i < n; i++){
        answer[2*i+1] = str2[i];
    }
    return answer;
}