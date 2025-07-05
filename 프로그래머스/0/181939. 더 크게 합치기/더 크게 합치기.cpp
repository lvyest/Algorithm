#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string r1, r2 = "";
    r1 = to_string(a) + to_string(b);
    r2 = to_string(b) + to_string(a);
    
    int answer1 = stoi(r1);  
    int answer2 = stoi(r2);

    answer = max(answer1, answer2);  
    return answer;
}