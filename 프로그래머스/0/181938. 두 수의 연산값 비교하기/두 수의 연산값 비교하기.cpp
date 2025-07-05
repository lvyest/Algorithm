#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;    
    string result1 = to_string(a) + to_string(b);    
    int answer1 = stoi(result1);
    
    int answer2 = 2*a*b;
        
    answer = max(answer1, answer2);
    return answer;
}