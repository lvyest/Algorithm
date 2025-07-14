#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 0; i < numbers.size()-1; i++){
        for(int t = i+1; t < numbers.size(); t++){
            int val = numbers[i] * numbers[t];
            if(val > answer) answer = val;
        }
    }
    return answer;
}